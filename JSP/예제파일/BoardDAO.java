package dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

import vo.Board;

public class BoardDAO {
	private static BoardDAO boardDAO = new BoardDAO();
	private BoardDAO() {}
	public static BoardDAO getInstance() {
		return boardDAO;
	}
	
	private Connection con;
	
	public void setConnection(Connection con) {
		this.con = con;
	}
	
	public boolean isPassword(int idx, String password) throws SQLException{
		String sql =
				"select * from board where idx=? and password=?";
		PreparedStatement pstmt = con.prepareStatement(sql);
		pstmt.setInt(1, idx);
		pstmt.setString(2, password);
		ResultSet rs = pstmt.executeQuery();
		if(rs.next()) return true;
		else return false;
	}
	
	public void readCount(int idx) throws SQLException {
		String sql =
				"update board set readCount=readcount+1 where idx=?";
		PreparedStatement pstmt = con.prepareStatement(sql);
		pstmt.setInt(1, idx);
		pstmt.execute();
	}
	
	public void update(Board vo) throws SQLException {
		String sql =
				"update board set subject=?,content=? where idx = ?";
		PreparedStatement pstmt = con.prepareStatement(sql);
		pstmt.setString(1, vo.getSubject());
		pstmt.setString(2, vo.getContent());
		pstmt.setInt(3, vo.getIdx());
		pstmt.execute();		
	}
	
	public void delete(int idx) throws SQLException {
		String sql =
				"delete from board where idx = ?";
		PreparedStatement pstmt = con.prepareStatement(sql);
		pstmt.setInt(1, idx);
		pstmt.execute();		
	}
	
	public void insert(Board vo) throws SQLException {
		String sql =
				"insert into board(name,password,subject,content,ip) "
				+ "valuses(?,?,?,?,?)";
		PreparedStatement pstmt = con.prepareStatement(sql);
		pstmt.setString(1, vo.getName());
		pstmt.setString(2, vo.getPassword());
		pstmt.setString(3, vo.getSubject());
		pstmt.setString(4, vo.getContent());
		pstmt.setString(5, vo.getIp());
		pstmt.execute();		
	}
	
	public int getCount() throws SQLException{
		String sql =
				"select count(*) from board";
		PreparedStatement pstmt = con.prepareStatement(sql);
		ResultSet rs = pstmt.executeQuery();
		rs.next();
		int cnt = rs.getInt(1);
		return cnt;
	}
	
	public Board getSelectOne(int idx) throws SQLException{
		String sql =
				"select * from board where idx = ?";
		PreparedStatement pstmt = con.prepareStatement(sql);
		pstmt.setInt(1, idx);
		ResultSet rs = pstmt.executeQuery();
		rs.next();
		
		Board vo = new Board();
		vo.setIdx(rs.getInt("idx"));
		vo.setName(rs.getString("name"));
		vo.setPassword(rs.getString("password"));
		vo.setSubject(rs.getString("subject"));
		vo.setContent(rs.getString("content"));
		vo.setIp(rs.getString("ip"));
		vo.setReg_date(rs.getTimestamp("reg_date"));
		
		return vo;
	}
	
	public ArrayList<Board> getList(int startNo, int pageSize) throws SQLException {
		String sql =
				"select * from board order by idx desc limit ?,?";
		PreparedStatement pstmt = con.prepareStatement(sql);
		pstmt.setInt(1, startNo);
		pstmt.setInt(2, pageSize);
		ResultSet rs = pstmt.executeQuery();
		
		ArrayList<Board> list = new ArrayList<>();
		
		if(rs.next()) {
			do {
				Board vo = new Board();
				vo.setIdx(rs.getInt("idx"));
				vo.setName(rs.getString("name"));
				vo.setPassword(rs.getString("password"));
				vo.setSubject(rs.getString("subject"));
				vo.setContent(rs.getString("content"));
				vo.setIp(rs.getString("ip"));
				vo.setReg_date(rs.getTimestamp("reg_date"));
				list.add(vo);
			}while(rs.next());
		}
		
		return list;
	}

}
