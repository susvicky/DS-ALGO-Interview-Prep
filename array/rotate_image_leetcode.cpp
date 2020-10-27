// link : https://leetcode.com/problems/rotate-image/submissions/

// pseudocode 


void rotate(vector<vector<int>>& matrix) 
{



      // step 1 : transpose in constant space    
        for(int i=0;i<matrix.size();i++)
        {
            for(int j = i;j<matrix[i].size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        
        
        //step 2 : reverse each row
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
        
}