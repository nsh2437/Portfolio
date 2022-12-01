using UnityEngine;
using Firebase;
using Firebase.Analytics;
 
public class FirebaseManager : MonoBehaviour
{
    FirebaseApp _app;
 
    void Start()
    {
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            if (task.Result == DependencyStatus.Available)
            {
                _app = FirebaseApp.DefaultInstance;
 
                LogEvent("test");
 
                LogEvent("param_test_int", "IntParam", 111);
 
                LogEvent("param_test_float", "FloatParam", 2.22f);
 
                LogEvent("param_test_string", "StringParam", "TEXT");
 
                LogEvent("param_test_array",
                    new Parameter(FirebaseAnalytics.ParameterCharacter, "warrior"),
                    new Parameter(FirebaseAnalytics.ParameterLevel, 5));
            }
            else
            {
                Debug.LogError("Could not resolve all Firebase dependencies: " + task.Result);
            }
        });
    }
 
    public void LogEvent(string eventName)
    {
        FirebaseAnalytics.LogEvent(eventName);
    }
 
    public void LogEvent(string eventName, string paramName, int paramValue)
    {
        FirebaseAnalytics.LogEvent(eventName, paramName, paramValue);
    }
 
    public void LogEvent(string eventName, string paramName, float paramValue)
    {
        FirebaseAnalytics.LogEvent(eventName, paramName, paramValue);
    }
 
    public void LogEvent(string eventName, string paramName, string paramValue)
    {
        FirebaseAnalytics.LogEvent(eventName, paramName, paramValue);
    }
 
    public void LogEvent(string eventName, params Parameter[] paramArray)
    {
        FirebaseAnalytics.LogEvent(eventName, paramArray);
    }
}