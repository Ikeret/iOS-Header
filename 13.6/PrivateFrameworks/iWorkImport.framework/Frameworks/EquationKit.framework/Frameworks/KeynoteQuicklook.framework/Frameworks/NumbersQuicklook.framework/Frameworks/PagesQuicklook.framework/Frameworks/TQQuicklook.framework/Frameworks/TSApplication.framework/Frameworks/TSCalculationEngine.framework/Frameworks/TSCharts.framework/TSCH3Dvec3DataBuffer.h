//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DFloatVectorDataBuffer.h>

@interface TSCH3Dvec3DataBuffer : TSCH3DFloatVectorDataBuffer
{
    vector_7200ab52 mContainer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (id)elementsAtIndices:(id)arg1;
- (unsigned long long)componentByteSize;
- (unsigned long long)components;
- (unsigned long long)count;
- (void)fillCapacity;
- (const void *)data;
@property(readonly, nonatomic) vector_7200ab52 *container;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

