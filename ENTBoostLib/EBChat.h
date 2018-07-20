//
//  EBChat.h
//  ENTBoostKit
//
//  Created by zhong zf on 14-7-23.
//
//

///信息内容类型
typedef enum EB_CHAT_ENTITY_TYPE
{
    EB_CHAT_ENTITY_TEXT = 0,    //文本
    EB_CHAT_ENTITY_RESOURCE = 1,    //资源(表情或头像等)
    EB_CHAT_ENTITY_IMAGE = 2,       //图片
    EB_CHAT_ENTITY_AUDIO = 3,       //录音
    EB_CHAT_ENTITY_MAP_POS = 4,     //地图位置
    EB_CHAT_ENTITY_CARD_INFO = 5,   //电子名片
//  EB_CHAT_ENTITY_FILE    = 20     //文件不属于富文本
    EB_CHAT_ENTITY_USER_DATA = 200, //用户自定义消息子类型(200及以上)
} EB_CHAT_ENTITY_TYPE;


///富文本信息基础类
@interface EBChat : NSObject

@property(nonatomic) EB_CHAT_ENTITY_TYPE type;  //内容类型
@property(nonatomic) uint64_t byteSize;  //内容的长度(字节数)
@property(nonatomic) NSData* data;   //内容数据

/**初始化方法
 * @param type 内容类型
 * @param byteSize 内容的长度(字节数)
 * @param data 内容
 * @return 本实例对象
 */
- (id)initWithType:(EB_CHAT_ENTITY_TYPE)type byteSize:(uint64_t)byteSize data:(NSData*)data;

@end
