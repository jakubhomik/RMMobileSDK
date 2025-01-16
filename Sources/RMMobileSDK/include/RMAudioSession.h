//
//  RMAudioSession.h
//  cqfxplus
//
//  Created by ctctct on 2020/5/15.
//  Copyright © 2020 frank xu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RMAudioSession : NSObject

+ (instancetype)sharedInstance;

- (void)talkStart;
- (void)talkEnd;
/*
 设置听筒模式
 */
+(void)setEarphoneModel;
/*
 设置扬声器模式
 */
+(void)setSpearkerModel;
@end

NS_ASSUME_NONNULL_END
