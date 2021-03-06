//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface JLRoutes : NSObject
{
    _Bool _shouldFallbackToGlobalRoutes;
    CDUnknownBlockType _unmatchedURLHandler;
    NSMutableArray *_routes;
    NSString *_scheme;
}

+ (id)_routesControllerForURL:(id)arg1;
+ (void)addRoute:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)addRoute:(id)arg1 priority:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)addRoutes:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)allRoutes;
+ (_Bool)canRouteURL:(id)arg1;
+ (_Bool)canRouteURL:(id)arg1 withParameters:(id)arg2;
+ (id)globalRoutes;
+ (_Bool)isVerboseLoggingEnabled;
+ (void)removeAllRoutes;
+ (void)removeRoute:(id)arg1;
+ (_Bool)routeURL:(id)arg1;
+ (_Bool)routeURL:(id)arg1 withParameters:(id)arg2;
+ (id)routesForScheme:(id)arg1;
+ (void)setShouldDecodePlusSymbols:(_Bool)arg1;
+ (void)setVerboseLoggingEnabled:(_Bool)arg1;
+ (_Bool)shouldDecodePlusSymbols;
+ (void)unregisterAllRouteSchemes;
+ (void)unregisterRouteScheme:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_isGlobalRoutesController;
- (void)_registerRoute:(id)arg1 priority:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)_routeURL:(id)arg1 withParameters:(id)arg2 executeRouteBlock:(_Bool)arg3;
- (void)_verboseLog:(id)arg1;
- (void)addRoute:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addRoute:(id)arg1 priority:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addRoutes:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)canRouteURL:(id)arg1;
- (_Bool)canRouteURL:(id)arg1 withParameters:(id)arg2;
- (id)description;
- (id)init;
- (void)removeAllRoutes;
- (void)removeRoute:(id)arg1;
- (_Bool)routeURL:(id)arg1;
- (_Bool)routeURL:(id)arg1 withParameters:(id)arg2;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
@property(nonatomic) _Bool shouldFallbackToGlobalRoutes; // @synthesize shouldFallbackToGlobalRoutes=_shouldFallbackToGlobalRoutes;
@property(copy, nonatomic) CDUnknownBlockType unmatchedURLHandler; // @synthesize unmatchedURLHandler=_unmatchedURLHandler;

@end

