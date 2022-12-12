public void GetInformation<T>(Action<List<T>> callback) where T : new ()
{
    var list = new List<T>();
    
    _reference.GetValueAsync().ContinueWith(task =>
    {
    	if(task.IsCompleted)
        {
            var snapshot = task.Result; // 0, ?, ? 같이 우리가 추가한 컬럼이 이곳에 해당합니다.
            foreach(var data in snapshot.Children)
            {
            	var info = (IDictionary) data.Value; // name, score 같은 컬럼이 이곳에 해당합니다.
                foreach(IdctionaryEntry elem in info)
                {
               	    if(elem.Value is T value)
                        list.Add(value);
                }
            }
            callback(list);
        }
    }
}