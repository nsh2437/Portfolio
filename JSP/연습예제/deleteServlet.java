package controller;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import service.BoardService;

@WebServlet("/delete.do")
public class deleteServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
	
	public deleteServlet() {
		super();
	}
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
    }

    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        
    	response.setContentType("text/html; charset=UTF-8");
        PrintWriter out = response.getWriter();

        int idx = Integer.parseInt(request.getParameter("idx"));
        String password = request.getParameter("password");
        int currentPage = Integer.parseInt(request.getParameter("page"));

        BoardService board = BoardService.getInstance();

        if(board.isPassword(idx, password)){
        	board.delete(idx);
        	response.sendRedirect("list.jsp?page=" + currentPage);
        }else {
        	out.print("<script>");
        	out.print("alert('글 비밀번호가 틀립니다.'); ");
        	out.print("history.back();");
        	out.print("</script>");
    	}
    }
}