//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSData, NSMutableData, NSString, NSURLConnection;

@interface MobClickSocialOperation : NSOperation
{
    _Bool success;
    id <MobClickSocialOperateDelegate> _delegate;
    long long _tag;
    long long _statusCode;
    NSString *_requestString;
    NSMutableData *_receivedData;
    NSData *_postData;
    NSURLConnection *_connect;
    int _state;
}

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
@property(nonatomic) id <MobClickSocialOperateDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUrl:(id)arg1 postData:(id)arg2 delegate:(id)arg3;
- (void)main;
@property(retain, nonatomic) NSData *postData; // @synthesize postData=_postData;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(copy, nonatomic) NSString *requestString; // @synthesize requestString=_requestString;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void)startDoSomething;

@end

