public void AddInformation(string name, long score)
{
    Rank user = new Rank(name, score);
    string json = JsonUtility.ToJson(user);
    string key = _reference.Push().Key;
    
    _reference.Child(key).SetRawJsonValueAsync(json);
}