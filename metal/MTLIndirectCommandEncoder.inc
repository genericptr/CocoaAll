{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLIndirectCommandEncoder.h }

{$ifdef TYPES}
type
  MTLIndirectRenderCommandProtocolPtr = ^MTLIndirectRenderCommandProtocol;
  MTLIndirectComputeCommandProtocolPtr = ^MTLIndirectComputeCommandProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLIndirectRenderCommandProtocol = objcprotocol external name 'MTLIndirectRenderCommand' (NSObjectProtocol)
    procedure setRenderPipelineState (pipelineState: id); message 'setRenderPipelineState:'; { available in macos , macCatalyst , ios  }
    procedure setVertexBuffer_offset_atIndex (buffer: id; offset: NSUInteger; index: NSUInteger); message 'setVertexBuffer:offset:atIndex:';
    procedure setFragmentBuffer_offset_atIndex (buffer: id; offset: NSUInteger; index: NSUInteger); message 'setFragmentBuffer:offset:atIndex:';
    procedure drawPatches_patchStart_patchCount_patchIndexBuffer_patchIndexBufferOffset_instanceCount_baseInstance_tessellationFactorBuffer_tessellationFactorBufferOffset_tessellationFactorBufferInstanceStride (numberOfPatchControlPoints: NSUInteger; patchStart: NSUInteger; patchCount: NSUInteger; patchIndexBuffer: id; patchIndexBufferOffset: NSUInteger; instanceCount: NSUInteger; baseInstance: NSUInteger; buffer: id; offset: NSUInteger; instanceStride: NSUInteger); message 'drawPatches:patchStart:patchCount:patchIndexBuffer:patchIndexBufferOffset:instanceCount:baseInstance:tessellationFactorBuffer:tessellationFactorBufferOffset:tessellationFactorBufferInstanceStride:'; { unavailable in tvos }
    //procedure drawIndexedPatches_patchStart_patchCount_patchIndexBuffer_patchIndexBufferOffset_controlPointIndexBuffer_controlPointIndexBufferOffset_instanceCount_baseInstance_tessellationFactorBuffer_tessellationFactorBufferOffset_tessellationFactorBufferInstanceStride (numberOfPatchControlPoints: NSUInteger; patchStart: NSUInteger; patchCount: NSUInteger; patchIndexBuffer: id; patchIndexBufferOffset: NSUInteger; controlPointIndexBuffer: id; controlPointIndexBufferOffset: NSUInteger; instanceCount: NSUInteger; baseInstance: NSUInteger; buffer: id; offset: NSUInteger; instanceStride: NSUInteger); message 'drawIndexedPatches:patchStart:patchCount:patchIndexBuffer:patchIndexBufferOffset:controlPointIndexBuffer:controlPointIndexBufferOffset:instanceCount:baseInstance:tessellationFactorBuffer:tessellationFactorBufferOffset:tessellationFactorBufferInstanceStride:'; { unavailable in tvos }
    procedure drawPrimitives_vertexStart_vertexCount_instanceCount_baseInstance (primitiveType: MTLPrimitiveType; vertexStart: NSUInteger; vertexCount: NSUInteger; instanceCount: NSUInteger; baseInstance: NSUInteger); message 'drawPrimitives:vertexStart:vertexCount:instanceCount:baseInstance:';
    procedure drawIndexedPrimitives_indexCount_indexType_indexBuffer_indexBufferOffset_instanceCount_baseVertex_baseInstance (primitiveType: MTLPrimitiveType; indexCount: NSUInteger; indexType: MTLIndexType; indexBuffer: id; indexBufferOffset: NSUInteger; instanceCount: NSUInteger; baseVertex: NSInteger; baseInstance: NSUInteger); message 'drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:instanceCount:baseVertex:baseInstance:';
    procedure reset; message 'reset';
  end;

type
  MTLIndirectComputeCommandProtocol = objcprotocol external name 'MTLIndirectComputeCommand' (NSObjectProtocol)
    procedure setComputePipelineState (pipelineState: id); message 'setComputePipelineState:'; { available in ios ,macos  }
    procedure setKernelBuffer_offset_atIndex (buffer: id; offset: NSUInteger; index: NSUInteger); message 'setKernelBuffer:offset:atIndex:';
    procedure concurrentDispatchThreadgroups_threadsPerThreadgroup (threadgroupsPerGrid: MTLSize; threadsPerThreadgroup: MTLSize); message 'concurrentDispatchThreadgroups:threadsPerThreadgroup:';
    procedure concurrentDispatchThreads_threadsPerThreadgroup (threadsPerGrid: MTLSize; threadsPerThreadgroup: MTLSize); message 'concurrentDispatchThreads:threadsPerThreadgroup:';
    procedure setBarrier; message 'setBarrier';
    procedure clearBarrier; message 'clearBarrier';
    procedure setImageblockWidth_height (width: NSUInteger; height: NSUInteger); message 'setImageblockWidth:height:'; { available in ios , macos  }
    procedure reset; message 'reset';
    procedure setThreadgroupMemoryLength_atIndex (length: NSUInteger; index: NSUInteger); message 'setThreadgroupMemoryLength:atIndex:';
    procedure setStageInRegion (region: MTLRegion); message 'setStageInRegion:';
  end;
{$endif}
