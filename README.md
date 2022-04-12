# CPP_Module_01

Memory allocation, pointers to members, references, switch statement  

Summary:  
This document contains the exercises of Module 01 from C++ modules.  

Version: 9  

### Objectives

OOP  

### Skills

Rigor  
Imperative programming  
Object-oriented programming  

### 42 old curriculum

CPP_Module_01 once existed as Cursus OOP Branch "Piscine_CPP Day01" Project.  

### 42 new curriculum

CPP_Module_01 now exists as Cursus CommonCore Level4 Project.  


## Exercise 00: BraiiiiiiinnnzzzZ

- 実行ファイル作成方法
	```sh
	make
	make leak		// with -fsanitize=leak
	make address	// with -g -fsanitize=address
	```
- 実行方法
	```
	./zombie
	```


## Exercise 01: Moar brainz!

- 実行ファイル作成方法
	```sh
	make
	make leak		// with -fsanitize=leak
	make address	// with -g -fsanitize=address
	```
- 実行方法
	```
	./zombieHorde N name
	```
	引数１: ゾンビの数 (0 \< n)  
	引数２: ゾンビの名前  


## Exercise 02: HI THIS IS BRAIN

- 実行ファイル作成方法
	```sh
	make
	```
- 実行方法
	```
	./brain
	```


## Exercise 03: Unnecessary violence

- 実行ファイル作成方法
	```sh
	make
	make leak		// with -fsanitize=leak
	make address	// with -g -fsanitize=address
	```
- 実行方法
	```
	./violence
	```


## Exercise 04: Sed is for losers

- 実行ファイル作成方法
	```sh
	make
	make leak		// with -fsanitize=leak
	make address	// with -g -fsanitize=address
	```
- 実行方法
	```
	./replace filename s1 s2
	```
	引数１: 置換したいファイルのパス  
	引数２: 置換される文字・単語  
	引数３: 置換する文字・単語  


## Exercise 05: Harl 2.0

- 実行ファイル作成方法  
	```sh
	make
	make leak		// with -fsanitize=leak
	make address	// with -g -fsanitize=address
	```
- 実行方法  
	↓ level に "DEBUG","INFO","WARNING","ERROR" をランダムで設定し、10回実行します。  
	```sh
	./harl
	```
	↓ level を手動で設定して実行することもできます。  
	```sh
	./harl level
	```
- テストファイル実行方法
	```sh
	make test
	sh -x test.sh
	```


## Exercise 06: Harl filter

- 実行ファイル作成方法  
	```sh
	make
	make leak		// with -fsanitize=leak
	make address	// with -g -fsanitize=address
	```
- 実行方法  
	level を設定して実行します。  
	```sh
	./harl level
	```

