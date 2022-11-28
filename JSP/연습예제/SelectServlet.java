package controller;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import service.BoardService;
import vo.Board;

@WebServlet("/select.do")
public class SelectServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
	
	public SelectServlet() {
		super();
	}
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		int idx = Integer.parseInt(request.getParameter("idx"));
		String exec = request.getParameter("exec");
		if(exec == null) exec="detail";
		int currentPage = Integer.parseInt(request.getParameter("page"));
		
		BoardService board = BoardService.getInstance();
		if(exec.equals("detail")) {
			board.readCount(idx);
			
			Cookie c = new Cookie("idx" + idx, String.valueOf(idx));
			c.setMaxAge(24*60*60);
			response.addCookie(c);
			
		}
			
			Board vo = board.getSelectOne(idx);
			
			request.setAttribute("rn", "\n");
			request.setAttribute("vo", vo);
			request.setAttribute("page", currentPage);
			
			RequestDispatcher dispatcher = request.getRequestDispatcher("/webapp/"+exec+"View.jsp");
			
			dispatcher.forward(request, response);
	}
	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
	}
}