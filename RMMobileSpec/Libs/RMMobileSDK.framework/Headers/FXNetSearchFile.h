//
//  FXNetSearchFile.h
//  cqfxplus
//
//  Created by 许 飞 on 14-5-15.
//  Copyright (c) 2014年 frank xu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FXNetDevice.h"
#import "FXDefine.h"

/*
 1.0 的设备，子存储器只查询、播放、导出镜像码流, 2.0的设备导出时子码流和主码流一起导出
 */
@interface FXNetSearchFile : NSObject

@property(nonatomic,strong)FXNetDevice* netDevice;


-(id)initWithNetDevice:(FXNetDevice*)device;
/**
 * 查询某个月的数据
 *
 * @param year 年份
 * @param month 月份
 * @param streamtype 码流类型
 * @param disktype 存储器类型
 * @param block 回调 此方法回调的内容为原数据
 * @return 错误类型
 */
-(ERROR_CODE)fx_searchCalendarWithYear:(NSInteger)year month:(NSInteger)month streamType:(STREAM_TYPE)streamtype diskType:(DISK_TYPE)disktype block:(DataBlock)block;

-(ERROR_CODE)SearchCalendarWithYear:(NSInteger)year Month:(NSInteger)month StreamType:(STREAM_TYPE)streamtype DiskType:(DISK_TYPE)disktype Block:(DataBlock)block;
-(ERROR_CODE)SearchCalendarAllWithStreamType:(STREAM_TYPE)streamtype diskType:(DISK_TYPE)disktype Block:(DataBlock)block;
-(ERROR_CODE)SearchCalendarAllWithStreamType:(STREAM_TYPE)streamtype Block:(DataBlock)block;
-(ERROR_CODE)SearchFilelistWithStart:(NSDate *)start End:(NSDate *)end StreamType:(STREAM_TYPE)streamtype Block:(DataBlock)block;

/// 搜索一天的文件列表
/// - Parameters:
///   - time: 时间
///   - streamtype: 码流类型
///   - disktype: 存储器类型
///   - block: 回调 此方法回调内容为原数据 交给业务层去解析
- (ERROR_CODE)searchFilelistWithDay:(NSDate *)time streamType:(STREAM_TYPE)streamtype diskType:(DISK_TYPE)disktype block:(DataBlock)block;

/// 搜索一天的文件列表
/// - Parameters:
///   - time: 时间
///   - streamtype: 码流类型
///   - disktype: 存储器类型
///   - block: 回调 此方法回调内容为FXRecordFilelistDateInfo
-(ERROR_CODE)SearchFilelistWithDay:(NSDate *)time StreamType:(STREAM_TYPE)streamtype DiskType:(DISK_TYPE)disktype Block:(DataBlock)block;
-(ERROR_CODE)SearchFilelistSynWithDay:(NSDate *)time StreamType:(STREAM_TYPE)streamtype DiskType:(DISK_TYPE)disktype Block:(DataBlock)block;
-(ERROR_CODE)SearchAlarmFilelistWithDay:(NSDate *)time StreamType:(STREAM_TYPE)streamtype diskType:(DISK_TYPE)diskType Block:(DataBlock)block;

-(ERROR_CODE)SearchFilelistEXWithStart:(NSDate *)start End:(NSDate *)end StreamType:(STREAM_TYPE)streamtype DiskType:(DISK_TYPE)disktype Block:(DataBlock)block;
//isAllUser  如果要检索所有司机的一键锁仓录像YES 如果当前登录的司机则为 NO
-(ERROR_CODE)SearchOneKeyLockFilelist:(BOOL)isAllUser Block:(DataBlock)block;

-(ERROR_CODE)SearchAuthorizationFilelistBlock:(DataBlock)block;


@end
