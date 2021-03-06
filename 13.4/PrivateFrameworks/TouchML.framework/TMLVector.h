//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLVectorJSExports-Protocol.h>

@interface TMLVector : NSObject <TMLVectorJSExports, NSCopying>
{
    struct CGVector _vector;
}

+ (void)initializeJSContext:(id)arg1;
@property(readonly, nonatomic) struct CGVector vector; // @synthesize vector=_vector;
@property(readonly, nonatomic) double dy;
@property(readonly, nonatomic) double dx;
- (id)CGVectorValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVector:(struct CGVector)arg1;

@end

