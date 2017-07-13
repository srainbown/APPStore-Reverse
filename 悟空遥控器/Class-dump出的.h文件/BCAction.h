//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface BCAction : NSObject
{
    _Bool _manualStart;
    NSString *_bindAppKey;
    NSArray *_actionItems;
    NSDictionary *_extraParams;
}

+ (id)actionFromString:(id)arg1;
+ (id)parseActionItemFromString:(id)arg1;
+ (_Bool)startAction:(id)arg1 manualStart:(_Bool)arg2;
+ (_Bool)startAction:(id)arg1 withCallback:(CDUnknownBlockType)arg2 manualStart:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
- (void)addParams:(id)arg1;
@property(retain, nonatomic) NSString *bindAppKey; // @synthesize bindAppKey=_bindAppKey;
@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
- (id)initActionWithString:(id)arg1;
@property(nonatomic) _Bool manualStart; // @synthesize manualStart=_manualStart;
- (_Bool)startWithCallback:(CDUnknownBlockType)arg1 connector:(id)arg2 manualStart:(_Bool)arg3;
- (_Bool)startWithCallback:(CDUnknownBlockType)arg1 manualStart:(_Bool)arg2;
- (_Bool)startWithManualStart:(_Bool)arg1;

@end

