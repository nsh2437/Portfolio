package db;

import java.util.Calendar;

public class MyUtil {
	public static boolean isToday(Calendar reg_date) {
		Calendar now = Calendar.getInstance();
		
		if(now.get(Calendar.YEAR) == reg_date.get(Calendar.YEAR)
		&&now.get(Calendar.MONTH) == reg_date.get(Calendar.MONTH)
		&&now.get(Calendar.DATE) == reg_date.get(Calendar.DATE)
		) {
			return true;
		}
		return false;
	}
	
}
