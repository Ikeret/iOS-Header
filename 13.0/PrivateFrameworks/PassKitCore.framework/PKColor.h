//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKColor : NSObject <NSSecureCoding, NSCopying>
{
    double _red;
    double _green;
    double _blue;
    double _alpha;
    struct CGColor *_colorRef;
}

+ (_Bool)supportsSecureCoding;
+ (id)colorFromString:(id)arg1;
+ (id)colorWithH:(double)arg1 S:(double)arg2 B:(double)arg3 A:(double)arg4;
+ (id)colorWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
- (struct CGColor *)_newCGColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long hash;
@property(readonly, nonatomic) __weak NSString *string;
@property(readonly, nonatomic) struct CGColor *CGColor;
- (double)luminance;
- (void)dealloc;

@end

