int j=0;
int i=0;
vector<int> brr;
while(i<m && j<n){
if(nums1[i]<=nums2[j]){
brr.push_back(nums1[i]);
i++;
}
else{
brr.push_back(nums2[j]);
j++;
}
}
while(i<m){
brr.push_back(nums1[i]);
i++;
}
while(j<n){
brr.push_back(nums2[j]);
j++;
}
for(int i=0;i<brr.size();i++){
nums1[i]=brr[i];
}
}