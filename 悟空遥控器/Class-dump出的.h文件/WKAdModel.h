//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WKAdModel : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_source;
    NSString *_ad_id;
    NSString *_ad_switch;
}

+ (id)replacedKeyFromPropertyName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
@property(retain, nonatomic) NSString *ad_switch; // @synthesize ad_switch=_ad_switch;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;

@end

