<%@page isELIgnored="false" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@ taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt" %>
<%@ taglib prefix="fn" uri="http://java.sun.com/jsp/jstl/functions" %>
<%@ page import="vo.BoardList"%>
<%@ page import="db.MyUtil"%>
<%@ page import="java.util.Calendar"%>
<%@ page import="java.text.SimpleDateFormat"%>
<%@ page import ="vo.Board"%>
<%@ page import ="java.util.ArrayList"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Conent-Type" content="text/html" charset="UTF-8">
<title>게시판</title>
<style type="text/css">
	table,td{
		border: 1px solid #ccc;
		border-collapse: collapse;
		padding: 6px;
		margin: auto;
		text-align: center;
	}
</style>
</head>
<body>
<h3 style="text-align: center;">게시판</h3>
<div style="text-align: center width: 700px; margin:auto">
총 ${plist.totalCount }개 글
현재 ${plist.currentPage }페이지
총 ${plist.totalPage }페이지</div>

<table>
	<tr>
		<td width="50">글수</td>
		<td width="250">제목</td>
		<td width="150">작성자</td>
		<td width="150">작성날짜</td>
		<td width="50">조회수</td>
	</tr>
	
<c:forEach var="vo" items="${list }">
	<tr>
		<td>${vo.idx }</td>
		<td style="text-align: left;">
		<a href = "select.do?idx=${vo.idx }&page=${plist.currentPage }">
		${vo.subject}</a>
		
		<jsp:useBean id="now" class="java.util.Date" />
		<c:if test="${vo.reg_date.year == now.year && 
					vo.reg_date.month == now.month &&
					vo.reg_date.date == now.date}" >
		</c:if>
		</td>
		<td>${vo.name }</td>
		<td>
		<c:choose>
		<c:when test="${vo.reg_date.year == now.year && 
					vo.reg_date.month == now.month &&
					vo.reg_date.date == now.date}" >
		<fmt:formatDate value="${vo.reg_date }" type="time"/>
		</c:when>
		<c:otherwise>
		<fmt:formatDate value="${vo.reg_date }" type="date"/>
		</c:otherwise>
		</c:choose>
		</td>
		<td>${vo.readCount }</td>
	</tr>
</c:forEach>
</table>

<div style="text-align: right width: 700px; margin:auto">
<br>
<input type="button" value="글쓰기" onclick="loca tion.href='insert.do'">
</div>
<div style="text-align: center;">
<c:if test="${plist.currentPage > 10 }">
	<input type='button' value='&lt;&lt;' onclick="location.href='?page=${plist.currentPage-10}'">
</c:if>
<c:choose>
<c:when test="${plist.currentPage == 1 }">
	<input type='button' value='&lt;' disabled>
</c:when>
<c:otherwise>
	<input type='button' value='&lt;' onclick="location.href='?page=${plist.currentPage-1}'">
</c:otherwise>
</c:choose>

<c:forEach var="i" begin="${plist.startPage }" end="${plist.endPage }">
<c:choose>
<c:when test="${i == plist.currentPage }">
	<input type='button' value='${i }' style="color: green;" disabled>
</c:when>
<c:otherwise>
	<input type='button' value='${i }' onclick="location.href='?page='${i }''">
</c:otherwise>
</c:choose>
</c:forEach>
<c:choose>
<c:when test="${plist.currentPage > plist.totalPage }">
	<input type='button' value='&gt;' disabled>
</c:when>
<c:otherwise>
	<input type='button' value='&gt;' onclick="location.href='?page='${plist.currentPage+1}''">
</c:otherwise>
</c:choose>
<c:if test="${plist.endPage < plist.totalPage }">
	<input type='button' value='&gt;&gt;' onclick="location.href='?page='${plist.endPage+1}''">
</c:if>
</div>
</body>
</html>