/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "tmarketplace_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace OpenStars { namespace Platform { namespace MarketPlace {

int _kTErrorCodeValues[] = {
  TErrorCode::EGood,
  TErrorCode::ENotFound,
  TErrorCode::EUnknown,
  TErrorCode::EDataExisted
};
const char* _kTErrorCodeNames[] = {
  "EGood",
  "ENotFound",
  "EUnknown",
  "EDataExisted"
};
const std::map<int, const char*> _TErrorCode_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kTErrorCodeValues, _kTErrorCodeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const TErrorCode::type& val) {
  std::map<int, const char*>::const_iterator it = _TErrorCode_VALUES_TO_NAMES.find(val);
  if (it != _TErrorCode_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}


TMediaItem::~TMediaItem() throw() {
}


void TMediaItem::__set_imgurl(const std::string& val) {
  this->imgurl = val;
}

void TMediaItem::__set_name(const std::string& val) {
  this->name = val;
}

void TMediaItem::__set_mediaType(const int64_t val) {
  this->mediaType = val;
}

void TMediaItem::__set_extend(const std::map<std::string, std::string> & val) {
  this->extend = val;
}
std::ostream& operator<<(std::ostream& out, const TMediaItem& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t TMediaItem::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->imgurl);
          this->__isset.imgurl = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->mediaType);
          this->__isset.mediaType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->extend.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _ktype1;
            ::apache::thrift::protocol::TType _vtype2;
            xfer += iprot->readMapBegin(_ktype1, _vtype2, _size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              std::string _key5;
              xfer += iprot->readString(_key5);
              std::string& _val6 = this->extend[_key5];
              xfer += iprot->readString(_val6);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.extend = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TMediaItem::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("TMediaItem");

  xfer += oprot->writeFieldBegin("imgurl", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->imgurl);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mediaType", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->mediaType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("extend", ::apache::thrift::protocol::T_MAP, 4);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->extend.size()));
    std::map<std::string, std::string> ::const_iterator _iter7;
    for (_iter7 = this->extend.begin(); _iter7 != this->extend.end(); ++_iter7)
    {
      xfer += oprot->writeString(_iter7->first);
      xfer += oprot->writeString(_iter7->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TMediaItem &a, TMediaItem &b) {
  using ::std::swap;
  swap(a.imgurl, b.imgurl);
  swap(a.name, b.name);
  swap(a.mediaType, b.mediaType);
  swap(a.extend, b.extend);
  swap(a.__isset, b.__isset);
}

TMediaItem::TMediaItem(const TMediaItem& other8) {
  imgurl = other8.imgurl;
  name = other8.name;
  mediaType = other8.mediaType;
  extend = other8.extend;
  __isset = other8.__isset;
}
TMediaItem& TMediaItem::operator=(const TMediaItem& other9) {
  imgurl = other9.imgurl;
  name = other9.name;
  mediaType = other9.mediaType;
  extend = other9.extend;
  __isset = other9.__isset;
  return *this;
}
void TMediaItem::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "TMediaItem(";
  out << "imgurl=" << to_string(imgurl);
  out << ", " << "name=" << to_string(name);
  out << ", " << "mediaType=" << to_string(mediaType);
  out << ", " << "extend=" << to_string(extend);
  out << ")";
}


TMarketPlaceItem::~TMarketPlaceItem() throw() {
}


void TMarketPlaceItem::__set_ID(const int64_t val) {
  this->ID = val;
}

void TMarketPlaceItem::__set_title(const std::string& val) {
  this->title = val;
}

void TMarketPlaceItem::__set_price(const int64_t val) {
  this->price = val;
}

void TMarketPlaceItem::__set_listMediaItems(const std::vector<TMediaItem> & val) {
  this->listMediaItems = val;
}

void TMarketPlaceItem::__set_category(const int64_t val) {
  this->category = val;
}

void TMarketPlaceItem::__set_subfeatures(const std::map<std::string, std::string> & val) {
  this->subfeatures = val;
}

void TMarketPlaceItem::__set_descriptions(const std::string& val) {
  this->descriptions = val;
}

void TMarketPlaceItem::__set_uid(const int64_t val) {
  this->uid = val;
}

void TMarketPlaceItem::__set_count(const int64_t val) {
  this->count = val;
}

void TMarketPlaceItem::__set_isdelivery(const bool val) {
  this->isdelivery = val;
}

void TMarketPlaceItem::__set_tags(const std::vector<std::string> & val) {
  this->tags = val;
}

void TMarketPlaceItem::__set_timestamps(const int64_t val) {
  this->timestamps = val;
}
std::ostream& operator<<(std::ostream& out, const TMarketPlaceItem& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t TMarketPlaceItem::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->ID);
          this->__isset.ID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->title);
          this->__isset.title = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->price);
          this->__isset.price = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->listMediaItems.clear();
            uint32_t _size10;
            ::apache::thrift::protocol::TType _etype13;
            xfer += iprot->readListBegin(_etype13, _size10);
            this->listMediaItems.resize(_size10);
            uint32_t _i14;
            for (_i14 = 0; _i14 < _size10; ++_i14)
            {
              xfer += this->listMediaItems[_i14].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.listMediaItems = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->category);
          this->__isset.category = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->subfeatures.clear();
            uint32_t _size15;
            ::apache::thrift::protocol::TType _ktype16;
            ::apache::thrift::protocol::TType _vtype17;
            xfer += iprot->readMapBegin(_ktype16, _vtype17, _size15);
            uint32_t _i19;
            for (_i19 = 0; _i19 < _size15; ++_i19)
            {
              std::string _key20;
              xfer += iprot->readString(_key20);
              std::string& _val21 = this->subfeatures[_key20];
              xfer += iprot->readString(_val21);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.subfeatures = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->descriptions);
          this->__isset.descriptions = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->uid);
          this->__isset.uid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->count);
          this->__isset.count = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isdelivery);
          this->__isset.isdelivery = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->tags.clear();
            uint32_t _size22;
            ::apache::thrift::protocol::TType _etype25;
            xfer += iprot->readListBegin(_etype25, _size22);
            this->tags.resize(_size22);
            uint32_t _i26;
            for (_i26 = 0; _i26 < _size22; ++_i26)
            {
              xfer += iprot->readString(this->tags[_i26]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.tags = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timestamps);
          this->__isset.timestamps = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TMarketPlaceItem::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("TMarketPlaceItem");

  xfer += oprot->writeFieldBegin("ID", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->ID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("title", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->title);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("price", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->price);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("listMediaItems", ::apache::thrift::protocol::T_LIST, 4);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->listMediaItems.size()));
    std::vector<TMediaItem> ::const_iterator _iter27;
    for (_iter27 = this->listMediaItems.begin(); _iter27 != this->listMediaItems.end(); ++_iter27)
    {
      xfer += (*_iter27).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("category", ::apache::thrift::protocol::T_I64, 5);
  xfer += oprot->writeI64(this->category);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("subfeatures", ::apache::thrift::protocol::T_MAP, 6);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->subfeatures.size()));
    std::map<std::string, std::string> ::const_iterator _iter28;
    for (_iter28 = this->subfeatures.begin(); _iter28 != this->subfeatures.end(); ++_iter28)
    {
      xfer += oprot->writeString(_iter28->first);
      xfer += oprot->writeString(_iter28->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("descriptions", ::apache::thrift::protocol::T_STRING, 7);
  xfer += oprot->writeString(this->descriptions);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("uid", ::apache::thrift::protocol::T_I64, 8);
  xfer += oprot->writeI64(this->uid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("count", ::apache::thrift::protocol::T_I64, 9);
  xfer += oprot->writeI64(this->count);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("isdelivery", ::apache::thrift::protocol::T_BOOL, 10);
  xfer += oprot->writeBool(this->isdelivery);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("tags", ::apache::thrift::protocol::T_LIST, 11);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->tags.size()));
    std::vector<std::string> ::const_iterator _iter29;
    for (_iter29 = this->tags.begin(); _iter29 != this->tags.end(); ++_iter29)
    {
      xfer += oprot->writeString((*_iter29));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timestamps", ::apache::thrift::protocol::T_I64, 12);
  xfer += oprot->writeI64(this->timestamps);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TMarketPlaceItem &a, TMarketPlaceItem &b) {
  using ::std::swap;
  swap(a.ID, b.ID);
  swap(a.title, b.title);
  swap(a.price, b.price);
  swap(a.listMediaItems, b.listMediaItems);
  swap(a.category, b.category);
  swap(a.subfeatures, b.subfeatures);
  swap(a.descriptions, b.descriptions);
  swap(a.uid, b.uid);
  swap(a.count, b.count);
  swap(a.isdelivery, b.isdelivery);
  swap(a.tags, b.tags);
  swap(a.timestamps, b.timestamps);
  swap(a.__isset, b.__isset);
}

TMarketPlaceItem::TMarketPlaceItem(const TMarketPlaceItem& other30) {
  ID = other30.ID;
  title = other30.title;
  price = other30.price;
  listMediaItems = other30.listMediaItems;
  category = other30.category;
  subfeatures = other30.subfeatures;
  descriptions = other30.descriptions;
  uid = other30.uid;
  count = other30.count;
  isdelivery = other30.isdelivery;
  tags = other30.tags;
  timestamps = other30.timestamps;
  __isset = other30.__isset;
}
TMarketPlaceItem& TMarketPlaceItem::operator=(const TMarketPlaceItem& other31) {
  ID = other31.ID;
  title = other31.title;
  price = other31.price;
  listMediaItems = other31.listMediaItems;
  category = other31.category;
  subfeatures = other31.subfeatures;
  descriptions = other31.descriptions;
  uid = other31.uid;
  count = other31.count;
  isdelivery = other31.isdelivery;
  tags = other31.tags;
  timestamps = other31.timestamps;
  __isset = other31.__isset;
  return *this;
}
void TMarketPlaceItem::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "TMarketPlaceItem(";
  out << "ID=" << to_string(ID);
  out << ", " << "title=" << to_string(title);
  out << ", " << "price=" << to_string(price);
  out << ", " << "listMediaItems=" << to_string(listMediaItems);
  out << ", " << "category=" << to_string(category);
  out << ", " << "subfeatures=" << to_string(subfeatures);
  out << ", " << "descriptions=" << to_string(descriptions);
  out << ", " << "uid=" << to_string(uid);
  out << ", " << "count=" << to_string(count);
  out << ", " << "isdelivery=" << to_string(isdelivery);
  out << ", " << "tags=" << to_string(tags);
  out << ", " << "timestamps=" << to_string(timestamps);
  out << ")";
}


TDataResult::~TDataResult() throw() {
}


void TDataResult::__set_errorCode(const TErrorCode::type val) {
  this->errorCode = val;
}

void TDataResult::__set_data(const TMarketPlaceItem& val) {
  this->data = val;
__isset.data = true;
}
std::ostream& operator<<(std::ostream& out, const TDataResult& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t TDataResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast32;
          xfer += iprot->readI32(ecast32);
          this->errorCode = (TErrorCode::type)ecast32;
          this->__isset.errorCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->data.read(iprot);
          this->__isset.data = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TDataResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("TDataResult");

  xfer += oprot->writeFieldBegin("errorCode", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->errorCode);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.data) {
    xfer += oprot->writeFieldBegin("data", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->data.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TDataResult &a, TDataResult &b) {
  using ::std::swap;
  swap(a.errorCode, b.errorCode);
  swap(a.data, b.data);
  swap(a.__isset, b.__isset);
}

TDataResult::TDataResult(const TDataResult& other33) {
  errorCode = other33.errorCode;
  data = other33.data;
  __isset = other33.__isset;
}
TDataResult& TDataResult::operator=(const TDataResult& other34) {
  errorCode = other34.errorCode;
  data = other34.data;
  __isset = other34.__isset;
  return *this;
}
void TDataResult::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "TDataResult(";
  out << "errorCode=" << to_string(errorCode);
  out << ", " << "data="; (__isset.data ? (out << to_string(data)) : (out << "<null>"));
  out << ")";
}


TListDataResult::~TListDataResult() throw() {
}


void TListDataResult::__set_errorCode(const TErrorCode::type val) {
  this->errorCode = val;
}

void TListDataResult::__set_data(const std::vector<TMarketPlaceItem> & val) {
  this->data = val;
__isset.data = true;
}
std::ostream& operator<<(std::ostream& out, const TListDataResult& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t TListDataResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast35;
          xfer += iprot->readI32(ecast35);
          this->errorCode = (TErrorCode::type)ecast35;
          this->__isset.errorCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->data.clear();
            uint32_t _size36;
            ::apache::thrift::protocol::TType _etype39;
            xfer += iprot->readListBegin(_etype39, _size36);
            this->data.resize(_size36);
            uint32_t _i40;
            for (_i40 = 0; _i40 < _size36; ++_i40)
            {
              xfer += this->data[_i40].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.data = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TListDataResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("TListDataResult");

  xfer += oprot->writeFieldBegin("errorCode", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->errorCode);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.data) {
    xfer += oprot->writeFieldBegin("data", ::apache::thrift::protocol::T_LIST, 2);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->data.size()));
      std::vector<TMarketPlaceItem> ::const_iterator _iter41;
      for (_iter41 = this->data.begin(); _iter41 != this->data.end(); ++_iter41)
      {
        xfer += (*_iter41).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TListDataResult &a, TListDataResult &b) {
  using ::std::swap;
  swap(a.errorCode, b.errorCode);
  swap(a.data, b.data);
  swap(a.__isset, b.__isset);
}

TListDataResult::TListDataResult(const TListDataResult& other42) {
  errorCode = other42.errorCode;
  data = other42.data;
  __isset = other42.__isset;
}
TListDataResult& TListDataResult::operator=(const TListDataResult& other43) {
  errorCode = other43.errorCode;
  data = other43.data;
  __isset = other43.__isset;
  return *this;
}
void TListDataResult::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "TListDataResult(";
  out << "errorCode=" << to_string(errorCode);
  out << ", " << "data="; (__isset.data ? (out << to_string(data)) : (out << "<null>"));
  out << ")";
}

}}} // namespace