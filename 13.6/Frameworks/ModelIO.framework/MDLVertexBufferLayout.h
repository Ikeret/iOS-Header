//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@interface MDLVertexBufferLayout : NSObject <NSCopying>
{
    unsigned long long _stride;
}

@property(nonatomic) unsigned long long stride; // @synthesize stride=_stride;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStride:(unsigned long long)arg1;

@end

