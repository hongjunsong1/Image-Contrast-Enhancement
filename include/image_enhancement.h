#ifndef _IMAGE_ENHANCEMENT_H
#define _IMAGE_ENHANCEMENT_H

#include <iostream>
#include <opencv2/opencv.hpp>

/***
@article{tao2005adaptive,
  title={Adaptive and integrated neighborhood-dependent approach for nonlinear enhancement of color images},
  author={Tao, Li and Asari, Vijayan K},
  journal={Journal of Electronic Imaging},
  volume={14},
  number={4},
  pages={043006},
  year={2005},
  publisher={International Society for Optics and Photonics}
}

The code refers to this blog(https://www.cnblogs.com/Imageshop/p/11665100.html).
***/
void AINDANE(const cv::Mat & src, cv::Mat & dst, int sigma1 = 5, int sigma2 = 20, int sigma3 = 120);


/***
@article{lee2013contrast,
  title={Contrast enhancement based on layered difference representation of 2D histograms},
  author={Lee, Chulwoo and Lee, Chul and Kim, Chang-Su},
  journal={IEEE transactions on image processing},
  volume={22},
  number={12},
  pages={5372--5384},
  year={2013},
  publisher={IEEE}
}

This is a reimplementation from http://mcl.korea.ac.kr/cwlee_tip2013/
***/
void LDR(const cv::Mat& src, cv::Mat & dst, double alpha = 2.5);


/***
@inproceedings{ying2017new,
  title={A New Image Contrast Enhancement Algorithm Using Exposure Fusion Framework},
  author={Ying, Zhenqiang and Li, Ge and Ren, Yurui and Wang, Ronggang and Wang, Wenmin},
  booktitle={International Conference on Computer Analysis of Images and Patterns},
  pages={36--46},
  year={2017},
  organization={Springer}
}

This is a reimplementation from https://baidut.github.io/OpenCE/caip2017.html
***/
void Ying_2017_CAIP(const cv::Mat& src, cv::Mat& dst, double mu = 0.5, double a = -0.3293, double b = 1.1258, double lambda = 0.5, double sigma = 5);


/***
@article{fu2018retinex,
  title={Retinex-based perceptual contrast enhancement in images using luminance adaptation},
  author={Fu, Qingtao and Jung, Cheolkon and Xu, Kaiqiang},
  journal={IEEE Access},
  volume={6},
  pages={61277--61286},
  year={2018},
  publisher={IEEE}
}
***/
void CEusingLuminanceAdaptation(const cv::Mat& src, cv::Mat& dst);



/***
@article{wang2019adaptive,
  title={Adaptive image enhancement method for correcting low-illumination images},
  author={Wang, Wencheng and Chen, Zhenxue and Yuan, Xiaohui and Wu, Xiaojin},
  journal={Information Sciences},
  volume={496},
  pages={25--41},
  year={2019},
  publisher={Elsevier}
}
***/
void adaptiveImageEnhancement(const cv::Mat& src, cv::Mat& dst);

#endif