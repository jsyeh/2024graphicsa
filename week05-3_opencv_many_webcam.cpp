#include <opencv/highgui.h>
int main()
{
    CvCapture * cap = cvCreateCameraCapture(0);
    CvCapture * cap2 = cvCreateCameraCapture(1);
    CvCapture * cap3 = cvCreateCameraCapture(2);
    CvCapture * cap4 = cvCreateCameraCapture(4);
    while(1){
        IplImage * img = cvQueryFrame(cap);
        cvShowImage("week05 opencv1", img);
        IplImage * img2 = cvQueryFrame(cap2);
        cvShowImage("week05 opencv2", img2);
        IplImage * img3 = cvQueryFrame(cap3);
        cvShowImage("week05 opencv3", img3);
        IplImage * img4 = cvQueryFrame(cap4);
        cvShowImage("week05 opencv4", img4);
        int key = cvWaitKey(33);
        if(key==27) break;
    }
    cvReleaseCapture(&cap);
    cvReleaseCapture(&cap2);
    cvReleaseCapture(&cap3);
    cvReleaseCapture(&cap4);
}
