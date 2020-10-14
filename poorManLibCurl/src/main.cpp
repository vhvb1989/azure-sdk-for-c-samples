/*
 *   Copyright (c) 2020 Victor Vazquez
 *   All rights reserved.
 */

#include <iostream>
#include <string>
#include <vector>

#include <curl/curl.h>

int main()
{

  //"http://httpbin.org/get"
  curl_global_init(CURL_GLOBAL_ALL);
  auto handle = curl_easy_init();

  // config
  curl_easy_setopt(handle, CURLOPT_URL, "http://httpbin.org/get");
  curl_easy_setopt(handle, CURLOPT_CONNECT_ONLY, 1L);
  auto result = curl_easy_perform(handle);

  // Write GET
  std::string getReq("GET /get HTTP/1.1\r\nHost: httpbin.org\r\n\r\n");
  size_t sent = 0;
  auto sentResult = curl_easy_send(handle, (void*)(getReq.data()), getReq.size(), &sent);
  std::cout << "Sent: " << sent << "/" << getReq.size() << ". Result= " << sentResult << std::endl;

  // Read
  std::vector<char> responseB(100);
  size_t read = 0;

  auto readResult = CURLE_AGAIN;
  while(readResult == CURLE_AGAIN) {
    readResult = curl_easy_recv(handle, responseB.data(), 100, &read);
  }

  std::cout << readResult << " ->Read " << read << " bytes. Data= " << std::string(responseB.begin(), responseB.begin() + read) << std::endl;

  readResult = curl_easy_recv(handle, responseB.data(), 100, &read);
  std::cout << readResult << " ->Read " << read << " bytes. Data= " << std::string(responseB.begin(), responseB.begin() + read) << std::endl;

  readResult = curl_easy_recv(handle, responseB.data(), 100, &read);
  std::cout << readResult << " ->Read " << read << " bytes. Data= " << std::string(responseB.begin(), responseB.begin() + read) << std::endl;

  readResult = curl_easy_recv(handle, responseB.data(), 100, &read);
  std::cout << readResult << " ->Read " << read << " bytes. Data= " << std::string(responseB.begin(), responseB.begin() + read) << std::endl;
  curl_easy_cleanup(handle);

  readResult = curl_easy_recv(handle, responseB.data(), 100, &read);
  std::cout << readResult << " ->Read " << read << " bytes. Data= " << std::string(responseB.begin(), responseB.begin() + read) << std::endl;

  
  curl_global_cleanup();
  return 0;
}
