//
//  UserModel.h
//  RMEasyCheckDemo
//
//  Created by Lee on 2019/11/14.
//  Copyright © 2019 Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FXNetDevice.h"

NS_ASSUME_NONNULL_BEGIN

@interface UserModel : NSObject

+(instancetype)shareUserData;
+(NSString*)analyseDeviceCode:(NSInteger)deviceCode;
@property (nonatomic, strong) FXNetDevice* netDevice;


@end

NS_ASSUME_NONNULL_END
