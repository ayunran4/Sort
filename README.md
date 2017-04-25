# Sort
Algorithm is a tool that helps your computer run efficiently. And Basics of Algorithm are sorting and serching. There are some sorting algorithms in computer science and they can be classified on some how. In this repository, I will describe about them.

알고리즘은 컴퓨터가 효율적으로 실행되도록 도와주는 도구입니다. 컴퓨터 과학에는 몇 가지의 정렬 알고리즘이 있고 그것들은 어떤 것으로 분류할 수 있습니다. 이 레퍼지토리에서 그것들에 대해 설명합니다.  

## What is a sorting algorithm?  
>In computer science a sorting algorithm is an algorithm that puts elements of a list in a certain order. The most-used orders are numerical order and lexicographical order. Efficient sorting is important for optimizing the use of other algorithms (such as search and merge algorithms) which require input data to be in sorted lists.  

>컴퓨터 과학에서 정렬 알고리즘은 목록의 요소를 특정 순서로 놓는 알고리즘입니다. 가장 많이 사용되는 오더는 숫자 순서와 사전식 순서입니다. 효율적인 정렬은 입력 데이터가 정렬된 목록에 있어야하는 다른 (탐색이나 병합 정렬 같은)알고리즘의 사용을 최적화하는 데 중요합니다.  
[참고](https://en.wikipedia.org/wiki/Sorting_algorithm "wikipeida::Sorting Algorithm")

## Sorting Algroithm
All of sorting algorithm will be made by C language. The sorting algorithm to be described in this repository is shown below:  
모든 정렬 알고리즘은 C언어로 구현될 예정입니다. 이 레퍼지토리에서 다룰 정렬 알고리즘은 아래와 같습니다:  
* __Simple Sort__  
  1.Bubble Sort  
  2.Selection Sort  
  3.Insertion Sort  
* __Efficient Sort__  
  1.Merge Sort  
  2.Quick Sort  
* __Distribution Sort__  
  1.Counting Sort  
  2.Bucket Sort  
  3.Radix Sort  

## 1. Bubble Sort
Bubble Sort is a basic method of one. It is considered to describe easy, so lots of people start to make sorting code with this. The space-complexity is O(n). The logic of procedure is as follow:

버블 정렬은 기본 정렬 방법입니다. 쉽게 구현한다고 여겨져 많은 사람들이 이것으로 정렬 코드를 짜기 시작합니다. 버블 정렬은 이웃하는 두 개의 인덱스를 비교하여 기준에 따라 값을 맨뒤로 넘겨 정렬하는 방법입니다. 공간 복잡도는 O(n)입니다. 진행 로직은 다음과 같습니다:

1. Compare the current index with the next index value.
2. If the next index is bigger than the current one, swith them.
3. If it doesn't, don't switch and compare the next consecutive values.
4. Repeat this (total array size - number of circulated to present) times.  

:
1. 현재 인덱스와 바로 다음의 인덱스 값을 비교
2. 현재 인덱스가 다음 인덱스보다 크면 바꿔줌
3. 다음 인덱스가 더 크면 교환하지 않고, 그 다음의 연속된 값을 비교함
4. 이를 (전체 배열 크기 - 현재까지 순환한 바퀴 수)만큼 반복

## 2. Selection Sort
Selection Sort finds the smallest value and insets it into the current index to sort.  
선택 정렬은 가장 작은 값을 찾아 현재 인덱스에 삽입하여 정렬합니다. 
