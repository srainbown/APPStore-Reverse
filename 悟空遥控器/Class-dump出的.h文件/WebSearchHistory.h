//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSString;

@interface WebSearchHistory : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(copy, nonatomic) NSNumber *searchType; // @dynamic searchType;
@property(copy, nonatomic) NSString *searchWords; // @dynamic searchWords;
@property(copy, nonatomic) NSNumber *sort; // @dynamic sort;

@end

