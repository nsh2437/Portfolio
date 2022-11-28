package service;

import java.sql.Connection;
import java.sql.SQLException;
import java.util.ArrayList;

import dao.BoardDAO;
import db.DBConn;
import vo.Board;

public class BoardService {
	
	private static BoardService service = new BoardService();
	private BoardService() {}
	public static BoardService getInstance() {
		return service;
	}
	
	public int getCount() {
		Connection con = DBConn.getMySqlConnection();
		BoardDAO dao = BoardDAO.getInstance();
		dao.setConnection(con);
		try {
			int cnt = dao.getCount();
			return cnt;
		} catch (SQLException e) {
			System.out.println("getCount Exception");
		}
		return 0;
	}
		
		public ArrayList<Board> getList(int currentPage, int pageSize){
			Connection con = DBConn.getMySqlConnection();
			BoardDAO dao = BoardDAO.getInstance();
			dao.setConnection(con);
			
			int startNo = (currentPage - 1) * pageSize;
			ArrayList<Board> list = null;
			try {
				list = dao.getList(startNo, pageSize);
			} catch (SQLException e) {
				System.out.println("getList Exception");
			}
			
			DBConn.close(con);
			return list;
		}
		
		public void insert(Board vo) {
			Connection con = DBConn.getMySqlConnection();
			BoardDAO dao = BoardDAO.getInstance();
			dao.setConnection(con);
			
			try {
				dao.insert(vo);
			} catch (SQLException e) {
				System.out.println("insert Exception");
				e.printStackTrace();
			}
			DBConn.close(con);

		}
		
		public Board getSelectOne(int idx) {
			Connection con = DBConn.getMySqlConnection();
			BoardDAO dao = BoardDAO.getInstance();
			dao.setConnection(con);
			Board vo = null;
			
			try {
				vo = dao.getSelectOne(idx);
			} catch (SQLException e) {
				System.out.println("getSelectOne Exception");
				e.printStackTrace();
			}
			DBConn.close(con);
			return vo;
		}
		
		public void readCount(int idx) {
			Connection con = DBConn.getMySqlConnection();
			BoardDAO dao = BoardDAO.getInstance();
			dao.setConnection(con);
			
			try {
				dao.readCount(idx);
			} catch (SQLException e) {
				System.out.println("readCount Exception");
				e.printStackTrace();
			}
			DBConn.close(con);
		}
		
		public void update(Board vo) {
			Connection con = DBConn.getMySqlConnection();
			BoardDAO dao = BoardDAO.getInstance();
			dao.setConnection(con);
			
			try {
				dao.update(vo);
			} catch (SQLException e) {
				System.out.println("update Exception");
				e.printStackTrace();
			}
			DBConn.close(con);
		}
		
		public boolean isPassword(int idx, String password) {
			Connection con = DBConn.getMySqlConnection();
			BoardDAO dao = BoardDAO.getInstance();
			dao.setConnection(con);
			
			boolean result = false;
			
			try {
				result = dao.isPassword(idx, password);
			} catch (SQLException e) {
				System.out.println("Password Check Exception");
				e.printStackTrace();
			}
			return result;
		}
		
		public void delete(int idx) {
			Connection con = DBConn.getMySqlConnection();
			BoardDAO dao = BoardDAO.getInstance();
			dao.setConnection(con);
			
			try {
				dao.delete(idx);
			} catch (SQLException e) {
				e.printStackTrace();
			}
			DBConn.close(con);
		}
}
