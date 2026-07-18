class Solution {
public:
    
void merge(vector<int>& arr,int s,int e){
	
	int mid=s+(e-s)/2;

	int len1=mid-s+1;
	int len2=e-mid;

	int *leftArray= new int[len1];
	int *rightArray= new int[len2];

	//copying elements from main array to temp arrays

	int mainIndex=s;

	for(int i=0;i<len1;i++)
		leftArray[i]=arr[mainIndex++];

	mainIndex=mid+1;

	for(int i=0;i<len2;i++)
		rightArray[i]=arr[mainIndex++];

	//merge two sorted arrays
	int index1=0;
	int index2=0;
	mainIndex=s;

	while(index1<len1 && index2<len2){
		if(leftArray[index1]<rightArray[index2])
			arr[mainIndex++]=leftArray[index1++];
		else
			arr[mainIndex++]=rightArray[index2++];
	}

	while(index1<len1)
		arr[mainIndex++]=leftArray[index1++];
	while(index2<len2)
		arr[mainIndex++]=rightArray[index2++];

}

void mergeSort(vector<int>& arr,int s,int e){

	//base case
	if(s>=e)
		return;
	//finding mid
	int mid=s+(e-s)/2;

	//left part sort kr do
	mergeSort(arr,s,mid);

	//right part sort kr do
	mergeSort(arr,mid+1,e);

	//merge kr do 
	merge(arr,s,e);

}

vector<int> sortArray(vector<int> arr) {
        mergeSort(arr,0,arr.size()-1);
        return arr;
	}
    
};