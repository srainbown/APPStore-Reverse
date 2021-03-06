//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface JLRRouteDefinition : NSObject
{
    NSString *_scheme;
    NSString *_pattern;
    unsigned long long _priority;
    CDUnknownBlockType _handlerBlock;
    NSArray *_patternComponents;
}

- (void).cxx_destruct;
- (id)baseMatchParametersForRequest:(id)arg1;
- (_Bool)callHandlerBlockWithParameters:(id)arg1;
- (id)description;
@property(copy, nonatomic) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
- (id)initWithScheme:(id)arg1 pattern:(id)arg2 priority:(unsigned long long)arg3 handlerBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
@property(retain, nonatomic) NSArray *patternComponents; // @synthesize patternComponents=_patternComponents;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (id)routeResponseForRequest:(id)arg1 decodePlusSymbols:(_Bool)arg2;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (id)variableNameForValue:(id)arg1;
- (id)variableValueForValue:(id)arg1 decodePlusSymbols:(_Bool)arg2;

@end

