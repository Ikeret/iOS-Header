//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXClassFactoryItem : NSObject
{
    NSString *_typeString;
    Class _baseClass;
    Class _itemClass;
}

@property(nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(nonatomic) Class baseClass; // @synthesize baseClass=_baseClass;
@property(retain, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

