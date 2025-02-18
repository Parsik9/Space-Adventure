#include <stdio.h>
#include <map>
#include <unordered_map>
namespace sa
{
//using

	template<typename T>
	using unique = std::unique_ptr<T>;

	template<typename T>
	using shared = std::shared_ptr<T>;

	template<typename T>
	using weak = std::weak_ptr<T>;

	template<typename keyType,typename valueType,typename pr=std::less<keyType>>
	using map = std::map<keyType, valueType, pr>;

	template<typename keyType, typename valueType, typename hash = std::hash<keyType>>
	using dictonary = std::unordered_map<keyType, valueType, hash>;

//macros
#define LOG(M, ...) printf(M "\n",## __VA_ARGS__)
}