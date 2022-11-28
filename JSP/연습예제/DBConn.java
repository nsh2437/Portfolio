package db;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBConn {
	
	public static Connection getMySqlConnection() {
		Connection conn = null;
		try {
			Class.forName("com.mysql.jdbc.Driver");
			
			String url = "jdbc:mysql://localhost:3306/subject";
			String user = "root";
			String password = "skfnxh1012";
			
			conn = DriverManager.getConnection(url, user, password);
			
		} catch (ClassNotFoundException | SQLException e) {
			e.printStackTrace();
		}
		
		return conn;
	}
	
	public static void close(Connection conn) {
		try {
			if(conn != null)
				conn.close();
		} catch(SQLException e) {
			e.printStackTrace();
		}
	}		
}
