//
//  FXNetDownloadFile.h
//  cqfxplus
//
//  Created by 许 飞 on 14-5-15.
//  Copyright (c) 2014年 frank xu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FXNetDevice.h"

@interface FXNetDownloadFile : NSObject

@property(nonatomic,strong)FXNetDevice* netDevice;
@property(nonatomic,assign)NSInteger downloadHandle;


-(id)initWithNetDevice:(FXNetDevice*)device;
-(ERROR_CODE)startDownloadBlackBoxFileStart:(NSDate *)starttime End:(NSDate *)endtime FilePath:(NSString *)path NewDataType:(NSInteger)type;
-(ERROR_CODE)startDownloadFrameInfoBlackBoxFileStart:(NSDate*)starttime End:(NSDate*)endtime FilePath:(NSArray*)path;
-(ERROR_CODE)startDownloadAlarmLogStart:(NSDate*)starttime End:(NSDate*)endtime FilePath:(NSString*)path;
-(ERROR_CODE)startDownloadOperationLogStart:(NSDate*)starttime End:(NSDate*)endtime FilePath:(NSString*)path;
-(ERROR_CODE)startDownloadVideoWithStart:(NSDate *)start End:(NSDate *)end Channel:(NSInteger)channel StreamType:(STREAM_TYPE)streamType DevFileName:(NSString *)devFileName SaveFileName:(NSString *)saveFile;
-(ERROR_CODE)startDownloadFrameInfoBlackBoxFileStart:(NSDate*)starttime End:(NSDate*)endtime FilePath:(NSArray*)path WithBlackBox:(NSInteger)blackBox;
-(ERROR_CODE)stopDownloadBlackBoxFile;
-(ERROR_CODE)stopDownloadAlarmLog;

-(ERROR_CODE)stopDownload;

/*RESPONSE
 STATE[]	UINT	"状态
 0：等待中
 1：执行中
 2：失败
 3：完成"
 TOTALSIZE[]	UINT	总大小
 GETSIZE[]	UINT	完成大小
 DEVCODE[]	UINT	设备错误码
 */
-(ERROR_CODE)getDownloadProcess:(ProcessBlock)block;
-(NSDictionary*)getDownloadProcess;

@end
