#ifndef __HTTP_UP_H__
#define __HTTP_UP_H__

#include <stdio.h>
#include <string.h>
#include <curl/curl.h>
#include <nlohmann/json.hpp>
#include <ros/ros.h>
#include <face_plate_msgs/Face_pic.h>
#include <face_plate_msgs/Plate_pic.h>
#include <face_plate_msgs/Illegal_vehicle_pic.h>
#include <face_plate_msgs/Face_compare.h>
#include <face_plate_msgs/Illegal_stop_video.h>

using json = nlohmann::json;

// 返回数据
struct Result_msg
{
	std::string result;
	std::string message;
};

// 人脸图片
struct Face_pic
{
	std::string vin;
	std::string deviceId;
	int pictureType;
	int sex;
	int age;
	int facialExpression;
	int race;
	int hat;
	int bmask;
	int eyeglass;
	long capTime;
	std::string facePicture;
	std::string faceScenePicture;
};

// 车牌图片
struct License_plate_pic
{
	std::string vin;
	std::string deviceId;
	int pictureType;
	std::string licenseNum;
	int plateColor;
	int carColor;
	int carType;
	long capTime;
	std::string licensePlatePicture;
	std::string licensePlateScenePicture;
};

//违法车辆抓拍
struct Capture_of_illegal_vehicles
{
	std::string vin;
	std::string deviceId;
	int pictureType;
	std::string license;
	double longitude;
	double latitude;
	long capTime;
	std::string illegalPictureName;
	std::string illegalPicture;
	std::string illegalFileName;
	std::string PASSTIME;
	std::string CARSTATE;
	std::string CAEPLATE;
	std::string PLATETYPE;
	std::string SPEED;
	std::string PLATECOLOR;
	std::string LOCATIONID;
	std::string DRIVEWAY;
	std::string DRIVEDIR;
	std::string CAPTUREDIR;
	std::string CARCOLOR;
	std::string CARBRAND;
	std::string TGSID;
	std::string PLATECOORD;
	std::string CABCOORD;
	std::string IMGID1;
	std::string IMGID2;
	std::string IMGID3;
};

// 人脸比对
struct Face_compare
{
	std::string vin;
	std::string deviceId;
	int pictureType;
	long capTime;
	double longitude;
	double latitude;
	std::string facePicture;
	std::string faceScenePicture;
	std::string faceLibPictureName;
	std::string faceLibPicture;
	std::string name;
	std::string personId;
	std::string sex;
	std::string similarity;
};

// 违法停车视频
struct Illegal_stop_video
{
	std::string vin;
	int pictureType;
	long startTime;
	long endTime;
	double longitude;
	double latitude;
	std::string license;
	int timeLength;
	std::string videoUrl;
	std::string result;
};


CURL *curl;
CURLcode res;
struct curl_slist *headerlist = NULL;
std::string url_;
/*ftp*/

typedef enum FTP_STATE
{
	FTP_UPLOAD_SUCCESS,
	FTP_UPLOAD_FAILED
}FTP_STATE;

typedef struct FTP_OPT
{
	char *url;
	char *user_key;
	char *file;
}FTP_OPT;

FTP_STATE ftp_upload(const FTP_OPT ftp_option);
/*end*/

void FacePicMsgCallback(const face_plate_msgs::Face_pic::ConstPtr &msg);
void FaceCompareMsgCallback(const face_plate_msgs::Face_compare::ConstPtr &msg);
void PlatePicMsgCallback(const face_plate_msgs::Plate_pic::ConstPtr &msg);
void IllegalPicMsgCallback(const face_plate_msgs::Illegal_vehicle_pic::ConstPtr &msg);
void IllegalStopVidoeMsgCallback(const face_plate_msgs::Illegal_stop_video::ConstPtr &msg);
void PubIllegalStopVideoMsg(const face_plate_msgs::Illegal_stop_video::ConstPtr &msg);
void Face_struct_assignment(Face_pic &face_msg, const face_plate_msgs::Face_pic::ConstPtr msg);
void Compare_struct_assignment(Face_compare &compare_msg, const face_plate_msgs::Face_compare::ConstPtr msg);
void Plate_struct_assignment(License_plate_pic &plate_msg, const face_plate_msgs::Plate_pic::ConstPtr msg);
void Illegal_struct_assignment(Capture_of_illegal_vehicles &plate_msg, const face_plate_msgs::Illegal_vehicle_pic::ConstPtr msg);
void Illegal_video_struct_assignment(Illegal_stop_video &illegal_stop_msg, const face_plate_msgs::Illegal_stop_video::ConstPtr msg);
void to_json(json &j, const Face_pic &face_msg);
void to_json(json &j, const Face_compare &compare_msg);
void to_json(json &j, const License_plate_pic &plate_msg);
void to_json(json &j, const Capture_of_illegal_vehicles &illegal_msg);
void to_json(json &j, const Illegal_stop_video &illegal_video_msg);
static size_t Write_face_callback(void *ptr, size_t size, size_t nmemb, Result_msg *face_ret);
static size_t Write_compare_callback(void *ptr, size_t size, size_t nmemb, Result_msg *compare_ret);
static size_t Write_plate_callback(void *ptr, size_t size, size_t nmemb, Result_msg *plate_ret);
static size_t Write_illegal_callback(void *ptr, size_t size, size_t nmemb, Result_msg *illegal_ret);
static size_t Write_illegal_video_callback(void *ptr, size_t size, size_t nmemb, Result_msg *illegal_video_ret);
void Substring(void *ptr, std::string &result_json);



#endif
