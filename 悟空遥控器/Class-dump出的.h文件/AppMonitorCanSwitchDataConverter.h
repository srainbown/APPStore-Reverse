//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppMonitorSwitchDataConverter.h"

@class NSLock, NSMutableDictionary;

@interface AppMonitorCanSwitchDataConverter : AppMonitorSwitchDataConverter
{
    NSLock *_lock;
    NSMutableDictionary *_countDict;
    NSMutableDictionary *_alarmDict;
    NSMutableDictionary *_statDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)GetValidPoint:(id)arg1 MonitorPoint:(id)arg2 Measure:(id)arg3 measureValue:(id)arg4;
@property(retain, nonatomic) NSMutableDictionary *alarmDict; // @synthesize alarmDict=_alarmDict;
- (id)compareValueWithMetricsForAlarm:(id)arg1 RandomNum:(int)arg2 isSuccess:(_Bool)arg3 KeyStr:(id)arg4 Arg:(id)arg5;
- (id)compareValueWithMetricsForCount:(id)arg1 RandomNum:(int)arg2 KeyStr:(id)arg3 Arg:(id)arg4;
- (id)compareValueWithMetricsForStat:(id)arg1 RandomNum:(int)arg2 KeyStr:(id)arg3 Dimension:(id)arg4;
- (void)completeAssignment:(id)arg1 ConverKey:(id)arg2 ConverValue:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *countDict; // @synthesize countDict=_countDict;
- (id)getDetailPointForStat:(id)arg1 MonitorPoint:(id)arg2;
- (id)getSwitchResultForCountAndAlarm:(id)arg1 monitorPoint:(id)arg2 Type:(id)arg3 Arg:(id)arg4 RandomNum:(int)arg5;
- (id)getSwitchResultForStat:(id)arg1 monitorPoint:(id)arg2 Dimension:(id)arg3 RandomNum:(int)arg4;
- (void)impAssignment:(id)arg1 Key:(id)arg2;
- (id)init;
- (_Bool)isEmptyofDic;
- (void)parseModuleAndMonitorPoints:(id)arg1 MonitorType:(id)arg2;
- (void)parseMonitorPoints:(id)arg1 MonitorType:(id)arg2 Sampling1:(id)arg3 Module:(id)arg4;
- (void)parseMonitorPoints:(id)arg1 MonitorType:(id)arg2 Sampling1:(id)arg3 sucSampling1:(id)arg4 failSampling1:(id)arg5 Module:(id)arg6;
- (void)parseSamplingAndMetrics:(id)arg1 MonitorType:(id)arg2;
- (void)removeDicContent;
- (void)setDicContent:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *statDict; // @synthesize statDict=_statDict;

@end

