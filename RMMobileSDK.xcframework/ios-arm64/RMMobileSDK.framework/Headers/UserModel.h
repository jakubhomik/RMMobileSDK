//
//  UserModel.h
//  iOSSDKDemo
//
//  Created by Lee on 2018/11/12.
//  Copyright © 2018年 Lee. All rights reserved.
//

#import "BaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface UserModel : BaseModel

/**
 用户名称
 */
@property (nonatomic, copy) NSString *username;
/**
 用户密码
 */
@property (nonatomic, copy) NSString *password;
/**
 用户ip地址
 */
@property (nonatomic, copy) NSString *serveIP;

/**
 分配的均衡地址端口
 */
@property (nonatomic, copy) NSString *msgPort;
/**
 车队
 */
@property (nonatomic,strong) NSArray *vehicleGroupArray;
/**
 车辆
 */
@property (nonatomic,strong) NSArray *vehicleArray;
/**
 重新登录刷新basic
 */
@property (nonatomic, assign) BOOL isReloadBasic;
/**
 重新登录刷新Media
 */
@property (nonatomic, assign) BOOL isReloadMedia;
/**
 创建单例usermodel
 */
+(instancetype)shareUserData;

- (void) getUserStoreInformation;

/**
 保存服务器域名
 */
+ (void)saveServerIP:(NSString *)ServerIP;
/**
保存用户名
 */
+ (void)saveUserName:(NSString *)theuserName;
/**
 保存用户密码
 */
+ (void)saveUserPassWord:(NSString *)userPassWord;

/**
 保存均衡地址端口号
 */
+ (void)saveMsgPort:(NSString *)msgPort;

@end

NS_ASSUME_NONNULL_END
