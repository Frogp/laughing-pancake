#include "json.h"

#include<iostream>
#include "rapidjson/filereadstream.h"
#include "rapidjson/filewritestream.h"
#include "rapidjson/prettywriter.h"

using std::string;
using rapidjson::Document;
using rapidjson::FileReadStream;
using rapidjson::FileWriteStream;
using rapidjson::PrettyWriter;


const int kReadBufferSize = 65536;

using namespace rapidjson;

bool Json::read(std::string const& file) {
	errno_t err = ::fopen_s(&fp_, file.c_str(), ("rb"));
	if (err) {
		return false;
	}
	
	char readBuffer[kReadBufferSize];
	FileReadStream readStream(fp_, readBuffer, _countof(readBuffer));
	bool result = !document_.ParseStream(readStream).HasParseError();

	::fclose(fp_);

	return result;
}

bool Json::write(std::string const& file) {
	errno_t err = ::fopen_s(&fp_, file.c_str(), ("wb"));
	if (err) {
		return false;
	}

	char writeBuffer[kReadBufferSize];
	FileWriteStream writeStream(fp_, writeBuffer, _countof(writeBuffer));
	PrettyWriter<FileWriteStream> writer(writeStream);
	document_.Accept(writer);

	::fclose(fp_);

	return true;
}