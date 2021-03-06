
//ln -s XXX.cpp XXX.cu
//Cu007 850bab723fb5687435d280831aa00687
//Cu16 Piza_cuda.cpp
//Cu15 Piza_cuda.cpp
//Cu14 Piza_cuda.cpp
//Cu13 Piza_cuda.cpp
//Cu12 cpp cu combo test.cpp
//nvcc Main.cpp Sub.cu
//
       #include <unistd.h>
       #include <iostream>
       #include <stdio.h>

__global__ void cuda_kernel(int *v){
  *v = -1;
}
void main(void){
  int cpu_mem=-774;
  int *cuda_mem;
  int N = sizeof(int);
 
     cudaMalloc(&dst_device,sizeof(int)*N*1.2);//access mergin 2.2
        cudaMemcpy (src_device,src,sizeof(int)*N,cudaMemcpyHostToDevice);
    cudaFree(dst_device);

  std::cout <<"num ="<<cpu_mem<<std::flush;
  cpu_mem = -771774;
  cuda_kernel<<<1,1>>>(cuda_mem);
    cudaDeviceSynchronize();
 
  std::cout <<"cuda="<<cpu_mem<<std::endl;
}
