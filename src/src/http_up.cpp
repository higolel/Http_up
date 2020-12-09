#include "http_up.h"

// --------------------------------------------------------
/// \概要:	赋值人脸图片结构体
///
/// \参数:	face_msg
/// \参数:	msg
// --------------------------------------------------------
void Face_struct_assignment(Face_pic &face_msg, const face_plate_msgs::Face_pic::ConstPtr msg)
{
	face_msg.vin = msg->vin;
	face_msg.deviceId = msg->deviceId;
	face_msg.pictureType = msg->pictureType;
	face_msg.sex = msg->sex;
	face_msg.age = msg->age;
	face_msg.facialExpression = msg->facialExpression;
	face_msg.race = msg->race;
	face_msg.hat = msg->hat;
	face_msg.bmask = msg->bmask;
	face_msg.eyeglass = msg->eyeglass;
	face_msg.capTime = msg->capTime;
	face_msg.facePicture = msg->facePicture;
	face_msg.faceScenePicture = msg->faceScenePicture;
}

// --------------------------------------------------------
/// \概要:	赋值人脸比对结构体
///
/// \参数:	compare_msg
/// \参数:	msg
// --------------------------------------------------------
void Compare_struct_assignment(Face_compare &compare_msg, const face_plate_msgs::Face_compare::ConstPtr msg)
{
	compare_msg.vin = msg->vin;
	compare_msg.deviceId = msg->deviceId;
	compare_msg.pictureType = msg->pictureType;
	compare_msg.capTime = msg->capTime;
	compare_msg.longitude = msg->longitude;
	compare_msg.latitude = msg->latitude;
	compare_msg.facePicture = msg->facePicture;
	compare_msg.faceScenePicture = msg->faceScenePicture;
	compare_msg.faceLibPictureName = msg->faceLibPictureName;
	compare_msg.faceLibPicture = msg->faceLibPicture;
	compare_msg.name = msg->name;
	compare_msg.personId = msg->personId;
	compare_msg.sex = msg->sex;
	compare_msg.similarity = msg->similarity;
}

// --------------------------------------------------------
/// \概要:	赋值车牌图片结构体
///
/// \参数:	plate_msg
/// \参数:	msg
// --------------------------------------------------------
void Plate_struct_assignment(License_plate_pic &plate_msg, const face_plate_msgs::Plate_pic::ConstPtr msg)
{
	plate_msg.vin = msg->vin;
	plate_msg.deviceId = msg->deviceId;
	plate_msg.pictureType = msg->pictureType;
	plate_msg.licenseNum = msg->licenseNum;
	plate_msg.plateColor = msg->plateColor;
	plate_msg.carColor = msg->carColor;
	plate_msg.carType = msg->carType;
	plate_msg.capTime = msg->capTime;
	plate_msg.licensePlatePicture = msg->licensePlatePicture;
	plate_msg.licensePlateScenePicture = msg->licensePlateScenePicture;
}

// --------------------------------------------------------
/// \概要:	赋值违法车辆结构体
///
/// \参数:	illegal_msg_msg
/// \参数:	msg
// --------------------------------------------------------
void Illegal_struct_assignment(Capture_of_illegal_vehicles &illegal_msg, const face_plate_msgs::Illegal_vehicle_pic::ConstPtr msg)
{
	illegal_msg.vin = msg->vin;
	illegal_msg.deviceId = msg->deviceId;
	illegal_msg.pictureType = msg->pictureType;
	illegal_msg.license = msg->license;
	illegal_msg.longitude = msg->longitude;
	illegal_msg.latitude = msg->latitude;
	illegal_msg.capTime = msg->capTime;
	illegal_msg.illegalPictureName = msg->illegalPictureName;
	illegal_msg.illegalPicture = msg->illegalPicture;
	illegal_msg.illegalFileName = msg->illegalFileName;
	illegal_msg.PASSTIME = msg->PASSTIME;
	illegal_msg.CARSTATE = msg->CARSTATE;
	illegal_msg.CAEPLATE = msg->CAEPLATE;
	illegal_msg.PLATETYPE = msg->PLATETYPE;
	illegal_msg.SPEED = msg->SPEED;
	illegal_msg.PLATECOLOR = msg->PLATECOLOR;
	illegal_msg.LOCATIONID = msg->LOCATIONID;
	illegal_msg.DRIVEWAY = msg->DRIVEWAY;
	illegal_msg.DRIVEDIR = msg->DRIVEDIR;
	illegal_msg.CAPTUREDIR = msg->CAPTUREDIR;
	illegal_msg.CARCOLOR = msg->CARCOLOR;
	illegal_msg.CARBRAND = msg->CARBRAND;
	illegal_msg.TGSID = msg->TGSID;
	illegal_msg.PLATECOORD = msg->PLATECOORD;
	illegal_msg.CABCOORD = msg->CABCOORD;
	illegal_msg.IMGID1 = msg->IMGID1;
	illegal_msg.IMGID2 = msg->IMGID2;
	illegal_msg.IMGID3 = msg->IMGID3;
}

// --------------------------------------------------------
/// \概要:	赋值违法停车视频结构体
///
/// \参数:	illegal_video_msg
/// \参数:	msg
// --------------------------------------------------------
void Illegal_video_struct_assignment(Illegal_stop_video &illegal_video_msg, const face_plate_msgs::Illegal_stop_video::ConstPtr msg)
{
	illegal_video_msg.vin = msg->vin;
	illegal_video_msg.pictureType = msg->pictureType;
	illegal_video_msg.startTime = msg->startTime;
	illegal_video_msg.endTime = msg->endTime;
	illegal_video_msg.longitude = msg->longitude;
	illegal_video_msg.latitude = msg->latitude;
	illegal_video_msg.license = msg->license;
	illegal_video_msg.timeLength = msg->timeLength;
	illegal_video_msg.videoUrl = msg->videoUrl;
	illegal_video_msg.result = msg->result;
}

// --------------------------------------------------------
/// \概要:	人脸结构体转json
///
/// \参数:	j
/// \参数:	face_msg
// --------------------------------------------------------
void to_json(json &j, const Face_pic &face_msg)
{
	j =
	{
		{"vin", face_msg.vin},
		{"deviceId", face_msg.deviceId},
		{"pictureType", face_msg.pictureType},
		{"sex", face_msg.sex},
		{"age", face_msg.age},
		{"facialExpression", face_msg.facialExpression},
		{"race", face_msg.race},
		{"hat", face_msg.hat},
		{"bmask", face_msg.bmask},
		{"eyeglass", face_msg.eyeglass},
		{"capTime", face_msg.capTime},
		{"facePicture", face_msg.facePicture},
		{"faceScenePicture", face_msg.faceScenePicture},
	};
}

// --------------------------------------------------------
/// \概要:	比对结构体转json
///
/// \参数:	j
/// \参数:	compare_msg
// --------------------------------------------------------
void to_json(json &j, const Face_compare &compare_msg)
{
	j =
	{
		{"vin", compare_msg.vin},
		{"deviceId", compare_msg.deviceId},
		{"pictureType", compare_msg.pictureType},
		{"capTime", compare_msg.capTime},
		{"longitude", compare_msg.longitude},
		{"latitude", compare_msg.latitude},
		{"facePicture", compare_msg.facePicture},
		{"faceScenePicture", compare_msg.faceScenePicture},
		{"faceLibPictureName", compare_msg.faceLibPictureName},
		{"faceLibPicture", compare_msg.faceLibPicture},
		{"name", compare_msg.name},
		{"personId", compare_msg.personId},
		{"sex", compare_msg.sex},
		{"similarity", compare_msg.similarity},
	};
}

// --------------------------------------------------------
/// \概要:	车牌结构体转json
///
/// \参数:	j
/// \参数:	plate_msg
// --------------------------------------------------------
void to_json(json &j, const License_plate_pic &plate_msg)
{
	j =
	{
		{"vin", plate_msg.vin},
		{"deviceId", plate_msg.deviceId},
		{"pictureType", plate_msg.pictureType},
		{"licenseNum", plate_msg.licenseNum},
		{"plateColor", plate_msg.plateColor},
		{"carColor", plate_msg.carColor},
		{"carType", plate_msg.carType},
		{"capTime", plate_msg.capTime},
		{"licensePlatePicture", plate_msg.licensePlatePicture},
		{"licensePlateScenePicture", plate_msg.licensePlateScenePicture},
	};
}

// --------------------------------------------------------
/// \概要:	违法结构体转json
///
/// \参数:	j
/// \参数:	illegal_msg
// --------------------------------------------------------
void to_json(json &j, const Capture_of_illegal_vehicles &illegal_msg)
{
	j =
	{
		{"vin", illegal_msg.vin},
		{"deviceId", illegal_msg.deviceId},
		{"pictureType", illegal_msg.pictureType},
		{"license", illegal_msg.license},
		{"longitude", illegal_msg.longitude},
		{"latitude", illegal_msg.latitude},
		{"capTime", illegal_msg.capTime},
		{"illegalPictureName", illegal_msg.illegalPictureName},
		{"illegalPicture", illegal_msg.illegalPicture},
		{"illegalFileName", illegal_msg.illegalFileName},
		{"PASSTIME", illegal_msg.PASSTIME},
		{"CARSTATE", illegal_msg.CARSTATE},
		{"CAEPLATE", illegal_msg.CAEPLATE},
		{"PLATETYPE", illegal_msg.PLATETYPE},
		{"SPEED", illegal_msg.SPEED},
		{"PLATECOLOR", illegal_msg.PLATECOLOR},
		{"LOCATIONID", illegal_msg.LOCATIONID},
		{"DRIVEWAY", illegal_msg.DRIVEWAY},
		{"DRIVEDIR", illegal_msg.DRIVEDIR},
		{"CAPTUREDIR", illegal_msg.CAPTUREDIR},
		{"CARCOLOR", illegal_msg.CARCOLOR},
		{"CARBRAND", illegal_msg.CARBRAND},
		{"TGSID", illegal_msg.TGSID},
		{"PLATECOORD", illegal_msg.PLATECOORD},
		{"CABCOORD", illegal_msg.CABCOORD},
		{"IMGID1", illegal_msg.IMGID1},
		{"IMGID2", illegal_msg.IMGID2},
		{"IMGID3", illegal_msg.IMGID3},
	};
}

// --------------------------------------------------------
/// \概要:	违法视频结构体转json
///
/// \参数:	j
/// \参数:	illegal_video_msg
// --------------------------------------------------------
void to_json(json &j, const Illegal_stop_video &illegal_video_msg)
{
	j =
	{
		{"vin", illegal_video_msg.vin},
		{"pictureType", illegal_video_msg.pictureType},
		{"startTime", illegal_video_msg.startTime},
		{"endTime", illegal_video_msg.endTime},
		{"longitude", illegal_video_msg.longitude},
		{"latitude", illegal_video_msg.latitude},
		{"license", illegal_video_msg.license},
		{"timeLength", illegal_video_msg.timeLength},
		{"videoUrl", illegal_video_msg.videoUrl},
		{"result", illegal_video_msg.result},
	};
}

// --------------------------------------------------------
/// \概要:	json转结构体
///
/// \参数:	j
/// \参数:	face_ret
// --------------------------------------------------------
void from_json(const json &j, Result_msg &ret)
{
	j.at("result").get_to(ret.result);
	j.at("message").get_to(ret.message);
}

// --------------------------------------------------------
/// \概要:	截取字符串
///
/// \参数:	ptr
/// \参数:	result_json
// --------------------------------------------------------
void Substring(void *ptr, std::string &result_json)
{
}

// --------------------------------------------------------
/// \概要:	人脸图片curl回调函数
///
/// \参数:	ptr
/// \参数:	size
/// \参数:	nmemb
/// \参数:	userp
///
/// \返回:	size_t
// --------------------------------------------------------
//static size_t Write_face_callback(void *ptr, size_t size, size_t nmemb, void *userp)
static size_t Write_face_callback(void *ptr, size_t size, size_t nmemb, Result_msg *face_ret)
{
	size_t realsize = size * nmemb;
	// 截取realsize 字节长度
	std::string result_ptr = std::string((char *)ptr).substr(0, realsize);
	auto j = json::parse(result_ptr);
	std::cout << "face json: " << j.dump() << std::endl;
	*face_ret = (json)j;

	return realsize;
}

// --------------------------------------------------------
/// \概要:	人脸比对curl回调函数
///
/// \参数:	ptr
/// \参数:	size
/// \参数:	nmemb
/// \参数:	compare_ret
///
/// \返回:	size_t
// --------------------------------------------------------
static size_t Write_compare_callback(void *ptr, size_t size, size_t nmemb, Result_msg *compare_ret)
{
	size_t realsize = size * nmemb;
	// 截取realsize 字节长度
	std::string result_ptr = std::string((char *)ptr).substr(0, realsize);
	auto j = json::parse(result_ptr);
	std::cout << "compare json: " << j.dump() << std::endl;
	*compare_ret = (json)j;

	return realsize;
}

// --------------------------------------------------------
/// \概要:	车牌图片curl回调函数
///
/// \参数:	ptr
/// \参数:	size
/// \参数:	nmemb
/// \参数:	userp
///
/// \返回:	size_t
// --------------------------------------------------------
static size_t Write_plate_callback(void *ptr, size_t size, size_t nmemb, Result_msg *plate_ret)
{
	size_t realsize = size * nmemb;
	// 截取realsize 字节长度
	std::string result_ptr = std::string((char *)ptr).substr(0, realsize);
	auto j = json::parse(result_ptr);
	std::cout << "plate json: " << j.dump() << std::endl;
	*plate_ret = (json)j;

	return realsize;
}

// --------------------------------------------------------
/// \概要:	违法图片curl回调函数
///
/// \参数:	ptr
/// \参数:	size
/// \参数:	nmemb
/// \参数:	illegal_ret
///
/// \返回:	size_t
// --------------------------------------------------------
static size_t Write_illegal_callback(void *ptr, size_t size, size_t nmemb, Result_msg *illegal_ret)
{
	size_t realsize = size * nmemb;
	// 截取realsize 字节长度
	std::string result_ptr = std::string((char *)ptr).substr(0, realsize);
	auto j = json::parse(result_ptr);
	std::cout << "illegal json: " << j.dump() << std::endl;
	*illegal_ret = (json)j;

	return realsize;
}

// --------------------------------------------------------
/// \概要:	违法视频curl回调函数
///
/// \参数:	ptr
/// \参数:	size
/// \参数:	nmemb
/// \参数:	illegal_ret
///
/// \返回:	size_t
// --------------------------------------------------------
static size_t Write_illegal_video_callback(void *ptr, size_t size, size_t nmemb, Result_msg *illegal_video_ret)
{
	size_t realsize = size * nmemb;
	// 截取realsize 字节长度
	std::string result_ptr = std::string((char *)ptr).substr(0, realsize);
	auto j = json::parse(result_ptr);
	std::cout << "illegal video json: " << j.dump() << std::endl;
	*illegal_video_ret = (json)j;

	return realsize;
}

// --------------------------------------------------------
/// \概要:	人脸图片回调函数
///
/// \参数:	msg
// --------------------------------------------------------
void FacePicMsgCallback(const face_plate_msgs::Face_pic::ConstPtr &msg)
{
	Face_pic face_msg;
	Result_msg face_ret;
	Face_struct_assignment(face_msg, msg);
	ROS_INFO("race = %d", face_msg.race);

	json face_json = face_msg;
	std::string face_dump = face_json.dump();

//	std::string url = "http://172.16.3.111:18000/pic/facePicture";
	curl = curl_easy_init();
	curl_easy_setopt(curl, CURLOPT_URL, (url_ + "facePicture").c_str());
	curl_easy_setopt(curl, CURLOPT_POST, 1L);


	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headerlist);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, face_dump.c_str());
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Write_face_callback);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &face_ret);

	/* Perform the request, res will get the return code */
	res = curl_easy_perform(curl);
	/* Check for errors */
	if(res != CURLE_OK)
		fprintf(stderr, "curl_easy_perform() failed: %s\n",
				curl_easy_strerror(res));

	/* always cleanup */
	curl_easy_cleanup(curl);

}

// --------------------------------------------------------
/// \概要:	人脸比对回调函数
///
/// \参数:	msg
// --------------------------------------------------------
void FaceCompareMsgCallback(const face_plate_msgs::Face_compare::ConstPtr &msg)
{
	Face_compare compare_msg;
	Result_msg compare_ret;
	Compare_struct_assignment(compare_msg, msg);

	json compare_json = compare_msg;
	std::string compare_dump = compare_json.dump();

//	std::string url = "http://172.16.3.111:18000/pic/facePicture";
	curl = curl_easy_init();
	curl_easy_setopt(curl, CURLOPT_URL, (url_ + "faceCompare").c_str());
	curl_easy_setopt(curl, CURLOPT_POST, 1L);


	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headerlist);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, compare_dump.c_str());
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Write_compare_callback);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &compare_ret);

	/* Perform the request, res will get the return code */
	res = curl_easy_perform(curl);
	/* Check for errors */
	if(res != CURLE_OK)
		fprintf(stderr, "curl_easy_perform() failed: %s\n",
				curl_easy_strerror(res));

	/* always cleanup */
	curl_easy_cleanup(curl);

}
// --------------------------------------------------------
/// \概要:	车牌图片回调函数
///
/// \参数:	msg
// --------------------------------------------------------
void PlatePicMsgCallback(const face_plate_msgs::Plate_pic::ConstPtr &msg)
{
	License_plate_pic plate_msg;
	Result_msg plate_ret;
	Plate_struct_assignment(plate_msg, msg);

	json plate_json = plate_msg;
	std::string plate_dump = plate_json.dump();

	curl = curl_easy_init();
	curl_easy_setopt(curl, CURLOPT_URL, (url_ + "licensePlate").c_str());
	curl_easy_setopt(curl, CURLOPT_POST, 1L);


	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headerlist);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, plate_dump.c_str());
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Write_plate_callback);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &plate_ret);

	/* Perform the request, res will get the return code */
	res = curl_easy_perform(curl);
	/* Check for errors */
	if(res != CURLE_OK)
		fprintf(stderr, "curl_easy_perform() failed: %s\n",
				curl_easy_strerror(res));

	/* always cleanup */
	curl_easy_cleanup(curl);
}

// --------------------------------------------------------
/// \概要:	违法车辆回调函数
///
/// \参数:	msg
// --------------------------------------------------------
void IllegalPicMsgCallback(const face_plate_msgs::Illegal_vehicle_pic::ConstPtr &msg)
{
	Capture_of_illegal_vehicles illegal_msg;
	Result_msg illegal_ret;
	Illegal_struct_assignment(illegal_msg, msg);

	json illegal_json = illegal_msg;
	std::string illegal_dump = illegal_json.dump();

	curl = curl_easy_init();
	curl_easy_setopt(curl, CURLOPT_URL, (url_ + "illegalVehicle").c_str());
	curl_easy_setopt(curl, CURLOPT_POST, 1L);

	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headerlist);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, illegal_dump.c_str());
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Write_illegal_callback);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &illegal_ret);

	/* Perform the request, res will get the return code */
	res = curl_easy_perform(curl);
	/* Check for errors */
	if(res != CURLE_OK)
		fprintf(stderr, "curl_easy_perform() failed: %s\n",
				curl_easy_strerror(res));

	/* always cleanup */
	curl_easy_cleanup(curl);
}

// --------------------------------------------------------
/// \概要:	违法车辆视频回调函数
///
/// \参数:	msg
// --------------------------------------------------------
void IllegalStopVidoeMsgCallback(const face_plate_msgs::Illegal_stop_video::ConstPtr &msg)
{
	PubIllegalStopVideoMsg(msg);
}

// --------------------------------------------------------
/// \概要:	上传视频信息
///
/// \参数:	msg
// --------------------------------------------------------
void PubIllegalStopVideoMsg(const face_plate_msgs::Illegal_stop_video::ConstPtr &msg)
{
	Illegal_stop_video illegal_video_msg;
	Result_msg illegal_video_ret;
	Illegal_video_struct_assignment(illegal_video_msg, msg);

	json illegal_video_json = illegal_video_msg;
	std::string illegal_video_dump = illegal_video_json.dump();

	curl = curl_easy_init();
	curl_easy_setopt(curl, CURLOPT_URL, (url_ + "illegalVideo").c_str());
	curl_easy_setopt(curl, CURLOPT_POST, 1L);

	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headerlist);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, illegal_video_dump.c_str());
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Write_illegal_video_callback);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &illegal_video_ret);

	/* Perform the request, res will get the return code */
	res = curl_easy_perform(curl);
	/* Check for errors */
	if(res != CURLE_OK)
		fprintf(stderr, "curl_easy_perform() failed: %s\n",
				curl_easy_strerror(res));

	/* always cleanup */
	curl_easy_cleanup(curl);
}

int main(int argc, char *argv[])
{
	ros::init(argc, argv, "http_up");
	ros::NodeHandle nh_;

	nh_.param("url", url_, std::string("http://172.16.3.111:18000/pic/"));

	curl_global_init(CURL_GLOBAL_ALL);

	headerlist = curl_slist_append(headerlist, "Accept:application/json");
	headerlist = curl_slist_append(headerlist, "Content-Type:application/json");
	headerlist = curl_slist_append(headerlist, "charset:utf-8");
	ros::Subscriber sub_face = nh_.subscribe("/face_attribute_msg", 1, FacePicMsgCallback);
	ros::Subscriber sub_compare = nh_.subscribe("/face_compare_msg", 1, FaceCompareMsgCallback);
	ros::Subscriber sub_plate = nh_.subscribe("/plate_pic_msg", 1, PlatePicMsgCallback);
	ros::Subscriber sub_illegal = nh_.subscribe("/illegal_pic_msg", 1, IllegalPicMsgCallback);
	ros::Subscriber sub_illegal_video = nh_.subscribe("/illegal_stop_video_msg", 1, IllegalStopVidoeMsgCallback);

	ros::spin();

	/* free slist */
	curl_slist_free_all(headerlist);

	curl_global_cleanup();

	return 0;
}
