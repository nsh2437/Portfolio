using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Auth;
 
public class LoginBehaviour : MonoBehaviour{
    private FirebaseAuth auth;
 
    void Start(){
        auth = FirebaseAuth.DefaultInstance;
        Login("inyongs@daum.net", "555555");
    }
 
    void Login(string email, string password){
 // 이메일과 비밀번호로 가입하는 함수
        auth.SignInWithEmailAndPasswordAsync(email, password).ContinueWith(
            task => {
                if(task.IsCompleted && !task.IsFaulted && !task.IsCanceled){
                    Debug.Log(email + " 로 로그인 하셨습니다.");
                }
                else{
                    Debug.Log("로그인에 실패하셨습니다.");
                }
            }
        );
    }
}