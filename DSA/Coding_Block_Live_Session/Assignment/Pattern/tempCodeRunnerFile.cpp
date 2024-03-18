    for (int i = 0; i < n/2+1;i++)
    {
        int j = 0;
        while(j<n/2+1)
        {
            if(i+j<=n/2)
            {
                cout << "*    ";
            }
            else
            {
                cout << "     ";
            }
            j++;
        }
        j = 1;
        while(j<n/2+1)
        {
            if(i<=j)
            {
                cout << "*    ";
            }
            else
            {
                cout << "     ";
            }
            j++;
        }
        cout << endl;
    }