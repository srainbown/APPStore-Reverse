//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WKDianboChosenDataModel : NSObject
{
    NSArray *_list;
    NSString *_next;
}

+ (void)getDianboChosenWithURL:(id)arg1 Success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)objectClassInArray;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *next; // @synthesize next=_next;

@end

