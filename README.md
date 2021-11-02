# DS_Project_2_2021_2
2021-2 Data Structure Project #2
Due date: 2021/11/05 23h 59m 59s.

Notice !! 윈도우에서 리눅스로 단순 파일 복사 및 드래그는 파일 인코딩 변환 문제가 발생 할 수 있으니
반드시 리눅스 환경에서 파일을 재생성 후 테스트 바랍니다!!
Notice !! 설계와 실습을 모두 수강하시는 분은 실습 과제제출란에만 제출 해주시면 됩니다 !!

## <u>**Notice**</u>
--------------------------
[2021_DS_Project2_ver6.pdf](https://github.com/myungoh/DS_Project_2_2021_2/files/7457649/2021_DS_Project2_ver6.pdf)

```
9/30 - ver1 업로드
10/04 - ver2 업로드(표 추가)
10/05 - ver3 업로드(그림 수정, 채점 기준 추가, SEARCH_BP 기능 추가)
10/06 - ver4 업로드(Print_Vector -> Print_vector 수정 / 오타 수정)
10/31 - ver5 업로드(B+tree 대소문자 구별, SEARCH_BP 명령어 -> 대소문자 구별하여 검색)
11/02 - ver6 업로드(동작 예시 수정)
```

## <u>**Skeleton code 수정**</u>
--------------------------
```
10/17 - manager.h : vector<VaccinationData*> Print_vector 추가
      - manager.cpp : avl->GetVector(Print_vector); 코드 Manager::VPRINT(string type_) --> Manager::VLOAD() 이동

```

### requirement
##### 먼저 해당 github에 저장되어 있는 base 코드를 다운받는다.
```
$ git clone https://github.com/myungoh/DS_Project_2_2021_2.git
$ cd DS_Project_2_2021_2
```

### how to compile this project
```
$ make
```

### how to run code
##### ./(생성된 실행파일) 의 형식으로 생성된 run 실행파일을 실행한다.
##### 실행하면 결과로 log.txt파일이 생성되면서 결과가 log.txt 에 저장된다. 
```
$ ./run
```

### how to make tar.gz
##### 압축할 파일들은 하나의 디렉토리에 모아두고 tar 명령어를 실행한다.
```
$ ls
AVLNode.h    AVLTree.h   BpTreeDataNode.h  BpTreeIndexNode.h  main.cpp  Manager.cpp  VaccinationData.h
AVLTree.cpp  BpTree.cpp  BpTree.h          BpTreeNode.h       Makefile  Manager.h

$ tar -czvf 2020202001_DS_project2.tar.gz *
AVLNode.h
AVLTree.cpp
AVLTree.h
BpTree.cpp
BpTreeDataNode.h
BpTree.h
BpTreeIndexNode.h
BpTreeNode.h
main.cpp
Makefile
Manager.cpp
Manager.h
VaccinationData.h
```

### how to decompress tar.gz
##### tar.gz 파일이 잘 압축되었는지 확인하기 위해 실행한다.
```
$ ls
2020202001_DS_project2.tar.gz

$ tar -xzvf 2020202001_DS_project1.tar.gz
AVLNode.h
AVLTree.cpp
AVLTree.h
BpTree.cpp
BpTreeDataNode.h
BpTree.h
BpTreeIndexNode.h
BpTreeNode.h
main.cpp
Makefile
Manager.cpp
Manager.h
VaccinationData.h
```



