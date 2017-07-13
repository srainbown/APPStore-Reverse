//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppMonitorEvent.h"

#import "AppMonitorRawEventProtocol.h"

@class AppMonitorDimensionValueSet, AppMonitorMeasureValueSet, NSString;

@interface AppMonitorRawStatEvent : AppMonitorEvent <AppMonitorRawEventProtocol>
{
    AppMonitorDimensionValueSet *_dimensionValues;
    AppMonitorMeasureValueSet *_measureValues;
}

+ (id)parseRawUTMsg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AppMonitorDimensionValueSet *dimensionValues; // @synthesize dimensionValues=_dimensionValues;
- (id)dumpToUTEvent;
@property(retain, nonatomic) AppMonitorMeasureValueSet *measureValues; // @synthesize measureValues=_measureValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

