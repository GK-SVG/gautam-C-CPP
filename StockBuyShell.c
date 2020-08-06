#include <stdio.h> 
struct Interval { 
	int buy; 
	int sell; 
}; 

// This function finds the buy sell schedule for maximum profit 
void stockBuySell(int price[], int n) 
{ 
	// Prices must be given for at least two days 
	int max=0;
	if (n == 1) 
		return; 

	int count = 0; // count of solution pairs 

	// solution vector 
	struct Interval sol[n / 2 + 1]; 

	// Traverse through given price array 
	int i = 0; 
	while (i < n - 1) { 
		// Find Local Minima. Note that the limit is (n-2) as we are 
		// comparing present element to the next element. 
		while ((i < n - 1) && (price[i + 1] <= price[i])) 
			i++; 

		// If we reached the end, break as no further solution possible 
		if (i == n - 1) 
			break; 

		// Store the index of minima 
		sol[count].buy = i++; 

		// Find Local Maxima. Note that the limit is (n-1) as we are 
		// comparing to previous element 
		while ((i < n) && (price[i] >= price[i - 1])) 
			i++; 

		// Store the index of maxima 
		sol[count].sell = i - 1; 

		// Increment count of buy/sell pairs 
		count++; 
	} 

	// print solution 
	if (count == 0) 
		printf("%d",max); 
	else { 
		for (int i = 0; i < count; i++){ 
			
            if (price[sol[i].sell]-price[sol[i].buy]>max)
            {max=price[sol[i].sell]-price[sol[i].buy];}}
            printf("%d",max);
	} 

	return; 
} 

// Driver program to test above functions 
int main() 
{ 
	int n;
    scanf("%d",&n);
    int price[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&price[i]);
    }

	// fucntion call 
	stockBuySell(price, n); 

	return 0; 
} 
