void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Write your code here
	if(n==0){
        return;
    }
    char a = source;
    char b = auxiliary;
    char c = destination;
    
    towerOfHanoi(n-1 , a , c , b );
    cout<< a <<" "<< c<<endl;
    towerOfHanoi(n-1 , b , a , c);
}
