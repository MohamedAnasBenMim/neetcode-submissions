class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        mx=max(arr)
        for i in range (len(arr)-1):
            
            if(arr[i]!=mx):
                arr[i]=mx
            else : 
                mx=max(arr[i+1:])
                #print(arr[i:])
                arr[i]=mx
        arr[len(arr)-1]=-1
        return arr



        
        
        