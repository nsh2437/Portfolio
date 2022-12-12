<h1 align="center">GitBash 명령어 정리</h1>

$ git help 또는 --help : 도움말

$ git config --global user.name 유저이름 : 전체 유저이름 설정

$ git config --global user.email 이메일주소 : 전체 유저 이메일 설정

$ git config --global core.autocrlf true, $ git config --global core.safecrlf false : 윈도와 맥의 캐리지 리턴과 라인 피드 변환

$ git config --global core.editor notepad : 전체 에디터 메모장으로 설정

$ git config --global core.editor “code —wait” : 전체 에디터 VSCODE로 설정

$ git config —global init.defaultBranch main : 기본 브랜치 main으로 지정

$ git config —global --list : 편집기 환경 설정

$ git init 저장소이름 : 저장소 생성

$ cd 저장소이름 : 해당 저장소로 이동

$ ls -al : 하부 파일과 숨김 폴더(.git) 확인

$ rm –rf 파일이름 : 해당 파일 삭제

$ git status : 상태 보기

$ git status –s 또는 --short : 상태 짧게 보기

$ git add 파일이름 : 스테이지(stage)에 저장(tracked file)

$ git commit –m ‘메세지’ : 깃 저장소(git repository) 저장

$ git log : 깃 커밋 이력 정보

$ git log HEAD : HEAD의 커밋 이력 정보 (HEAD 하나 전 이력 : " HEAD^ == HEAD~, HEAD 두 개 전 이력 : HEAD^^ == HEAD~~ == HEAD~2)

$ git log --oneline : 커밋 이력 한 줄 확인

$ git config --global alias.변경명령어 '기존명령어’ : 변경명령어에 기존명령어를 재정의(보통 단축하는 용도로 사용)

$ git restore --staged 파일이름 : 스테이지된 파일을 취소

$ git clone 주소_URL : 동일 폴더 생성해 복제

$ git clone 주소_URL . : 현재 폴더에 복제

$ git clone 주소_URL dname : dname 폴더 생성해 복제

$ git remote : 원격 저장소 별칭 이름 조회

$ git remote –v : 원격 저장소 별칭 이름 세부 조회

$ git pull : 수정된 내용 다시 가져오기

$ git diff : 스테이징 영역 -> 작업 디렉토리 비교

$ git diff HEAD : 커밋 HEAD -> 작업 디렉토리 비교

$ git diff --staged HEAD : 커밋 HEAD --> 스테이징 영역 비교

$ git checkout HEAD~ : HEAD 하나 전 이력으로 이동(※checkout은 작업 영역이 깨끗해야 사용 가능)

$ git stash : 작업 영역 임시 저장

$ git reset --hard 커밋이력 : 커밋 이력 내용으로 모든 영역 수정

$ git reset --mixed 커밋이력 : 커밋 이력 내용으로 깃 저장소와 스테이지 영역만 수정

$ git reset --soft 커밋이력 : 커밋 이력 내용으로 깃 저장소만 수정














