#include<bits/stdc++.h>
using namespace std;


void doublyEven( int n )
{
	int arr[n][n], i, j;
	for ( i = 0; i < n; i++)
		for ( j = 0; j < n; j++)
			arr[i][j] = (n*i) + j + 1;
	for ( i = 0; i < n/4; i++)
		for ( j = 0; j < n/4; j++)
			arr[i][j] = (n*n + 1) - arr[i][j];
	for ( i = 0; i < n/4; i++)
		for ( j = 3 * (n/4); j < n; j++)
			arr[i][j] = (n*n + 1) - arr[i][j];

	for ( i = 3 * n/4; i < n; i++)
		for ( j = 0; j < n/4; j++)
			arr[i][j] = (n*n+1) - arr[i][j];
	for ( i = 3 * n/4; i < n; i++)
		for ( j = 3 * n/4; j < n; j++)
			arr[i][j] = (n*n + 1) - arr[i][j];

	for ( i = n/4; i < 3 * n/4; i++)
		for ( j = n/4; j < 3 * n/4; j++)
			arr[i][j] = (n*n + 1) - arr[i][j];

	for (i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << "\n";
	}
}

void generateSquare(int n)
{
	int magicSquare[n][n];
	memset(magicSquare, 0, sizeof(magicSquare));
	int i = n/2;
	int j = n-1;
	for (int num = 1; num <= n*n; )
	{
		if (i == -1 && j == n)
		{
			j = n-2;
			i = 0;
		}
		else
		{
			if (j == n)
				j = 0;
			if (i < 0)
				i = n - 1;
		}
		if (magicSquare[i][j])
		{
			j -= 2;
			i++;
			continue;
		}
		else
			magicSquare[i][j] = num++;

		j++; i--;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout<<magicSquare[i][j]<<" ";
		cout<<endl;
	}
}

int subGrid[400][400];

void oddMagicSquare(int n) {
        //if (n < 3 || n % 2 == 0)
           // return NULL;

        int value = 0;
        int squareSize = n * n;
        int c = n / 2, r = 0,i;

        //int** result = (int**)malloc(n*sizeof(int*));

		//for(i=0;i<n;i++)
			//result[i] = (int*)malloc(n*sizeof(int));
        //int result[n+1][n+1];
        while (++value <= squareSize) {
            subGrid[r][c] = value;
            if (r == 0) {
                if (c == n - 1) {
                    r++;
                } else {
                    r = n - 1;
                    c++;
                }
            } else if (c == n - 1) {
                r--;
                c = 0;
            } else if (subGrid[r - 1][c + 1] == 0) {
                r--;
                c++;
            } else {
                r++;
            }
        }
        //return result;
    }

void singlyEvenMagicSquare(int n) {

        int size = n * n;
        int halfN = n / 2;
        int subGridSize = size / 4, i;

        //int** subGrid = oddMagicSquare(halfN);
        int gridFactors[] = {0, 2, 3, 1};
        //int** result = (int**)malloc(n*sizeof(int*));
        int result[n+1][n+1];
		//for(i=0;i<n;i++)
			//result[i] = (int*)malloc(n*sizeof(int));

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                int grid = (r / halfN) * 2 + (c / halfN);
                result[r][c] = subGrid[r % halfN][c % halfN];
                result[r][c] += gridFactors[grid] * subGridSize;
            }
        }

        int nColsLeft = halfN / 2;
        int nColsRight = nColsLeft - 1;

        for (int r = 0; r < halfN; r++)
            for (int c = 0; c < n; c++) {
                if (c < nColsLeft || c >= n - nColsRight
                        || (c == nColsLeft && r == nColsLeft)) {

                    if (c == 0 && r == nColsLeft)
                        continue;

                    int tmp = result[r][c];
                    result[r][c] = result[r + halfN][c];
                    result[r + halfN][c] = tmp;
                }
            }
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        cout<<result[i][j]<<" ";
                }
                cout<<endl;
        }
        //return result;
    }

int main()
{
	int n;
	cin>>n;
	if(n==2)
	{
	      cout<<"1 "<<"4 "<<endl;
	      cout<<"2 "<<"3 "<<endl;
	}
	else
	if(n%2!=0)
	generateSquare(n);
	else
	if(n%4==0)
	{
	        doublyEven(n);
	}
	else
	if(n>=6)
	{
	       singlyEvenMagicSquare(n);
	}
	return 0;
}
