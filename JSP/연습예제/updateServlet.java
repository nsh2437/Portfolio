package controller;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import service.BoardService;
import vo.Board;

@WebServlet("/update.do")
public class updateServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
	
	public updateServlet() {
		super();
	}
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
	    RequestDispatcher dispatcher =
	        request.getRequestDispatcher("/webapp/updateView.jsp");

	    dispatcher.forward(request, response);
	}

	        protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
	            request.setCharacterEncoding("UTF-8");

	            response.setContentType("text/html; charset=UTF-8");
	            PrintWriter out = response.getWriter();

	            int idx = Integer.parseInt(request.getParameter("idx"));
	            String subject = request.getParameter("subject");
	            String content = request.getParameter("content");
	            String password = request.getParameter("password");
	            int currentPage = Integer.parseInt(request.getParameter("page"));

	            BoardService board = BoardService.getInstance();

	            Board vo = new Board();
	            vo.setIdx(idx);
	            vo.setPassword(password);
	            vo.setSubject(subject);
	            vo.setContent(content);

	            
	        }
}