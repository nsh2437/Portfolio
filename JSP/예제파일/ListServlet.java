package controller;

import java.io.IOException;
import java.util.ArrayList;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import service.BoardService;
import vo.Board;
import vo.BoardList;

@WebServlet("/list.do")
public class ListServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
	
	public ListServlet() {
		super();
	}
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		String temp = request.getParameter("page");
		int currentPage = 1;
		if(temp != null) {
			currentPage = Integer.parseInt(temp);
		}
		int pageSize = 10;
		
		BoardService board = BoardService.getInstance();
		
		int totalCount = board.getCount();
		
		BoardList plist = new BoardList(currentPage, pageSize, totalCount);
		
		ArrayList<Board> list = board.getList(currentPage, pageSize);
		int cnt = board.getCount();
		request.setAttribute("list", list);
		request.setAttribute("plist", plist);	
		
		RequestDispatcher dispatcher = request.getRequestDispatcher("listView.jsp");
		dispatcher.forward(request, response);
	}
	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
